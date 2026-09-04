/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *result = (int *)malloc(numsSize * sizeof(int));

    int product = 1;
    for(int i = 0 ; i < numsSize ; i++)  {
        product *= nums[i];
    }

    for(int i = 0 ; i < numsSize ; i++) {
        result[i] = 1;
    }

    for(int i = 0 ; i < numsSize ; i++){
        if(nums[i] == 0) {
            for(int k = 0 ; k < numsSize ; k++) {
                if(k != i) { 
                    result[i] *= nums[k];
                }
            }
        }
        else{
            result[i] = product / nums[i];
        }
    }

    *returnSize = numsSize;
    return result;
}