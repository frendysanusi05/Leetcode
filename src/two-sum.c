int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* ans = (int*) malloc (*returnSize *sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i+1; j < numsSize; j++) {
            if (nums[j] == target - nums[i]) {
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    return ans;
}