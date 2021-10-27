

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    int* ptr = (int*)malloc(2*numsSize * sizeof(int));
    *returnSize = 2*numsSize;
    for(int i=0; i<numsSize; i++)
            {
                 ptr[i] = ptr[numsSize+i] = nums[i];
            }
    return ptr;
}
