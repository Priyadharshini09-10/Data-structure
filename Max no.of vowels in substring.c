    int isVowel(char c) {
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int maxVowels(char * s, int k){
    int count = 0;
    
    // First window
    for(int i = 0; i < k; i++){
        if(isVowel(s[i])){
            count++;
        }
    }
    
    int maxCount = count;
    
    // Sliding window
    for(int i = k; s[i] != '\0'; i++){
        
        // Add new character
        if(isVowel(s[i])){
            count++;
        }
        
        // Remove old character
        if(isVowel(s[i-k])){
            count--;
        }
        
        if(count > maxCount){
            maxCount = count;
        }
    }
    
    return maxCount;
}

