int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    
    int sum = 0;
    int count = 0;
    int target = threshold * k;
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }
    
    if(sum >= target){
        count++;
    }
    
    for(int i = k; i < arrSize; i++){
        sum = sum + arr[i] - arr[i - k];
        
        if(sum >= target){
            count++;
        }
    }
    
    return count;
}
