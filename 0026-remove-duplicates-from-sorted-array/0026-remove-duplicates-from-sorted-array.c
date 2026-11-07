int removeDuplicates(int* nums, int numsSize) {
    
    int arr[numsSize];
    for(int i = 0 ; i < numsSize ; i++) {
        arr[i] = nums[i];
    }

    for(int i = 0 ; i < numsSize - 1 ; i++) {
        if(arr[i] == arr[i + 1]) {
            arr[i] = INT_MIN;
        }
    }

    int count = 0;
    int k = 0;

    for(int i = 0 ; i < numsSize ; i++) {
        if(arr[i] != INT_MIN) {
            count++;
            nums[k++] = arr[i];
        }
    }

    return count;
}