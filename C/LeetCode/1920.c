/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;
    int* a = (int*)malloc(numsSize * sizeof(int));
    for(int i = 0; i<numsSize; i++)
    {
        a[i] = nums[i];
        a[i] = a[nums[i]];
    }
    return a;
}
