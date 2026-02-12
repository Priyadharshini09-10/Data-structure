double findMaxAverage(int* nums, int numsSize, int k) {
    int sum=0;
    int max=0;
    for(int i=0;i<k;i++){
        sum=sum+nums[i];
    }
    max=sum;
    for(int i=k;i<numsSize;i++){
        sum=sum+nums[i]-nums[i-k];
        if(sum>max){
            max=sum;
        }
    }
    return (double)max/k;
}
