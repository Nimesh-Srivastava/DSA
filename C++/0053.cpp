class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        //using kadane's algorithm
        //TC : O(N)
        //SC : O(1)
        int sum = 0;
        int max_val = INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            sum = sum + nums[i];
            max_val = max(max_val, sum);
            if (sum < 0)
                sum = 0;
        }
        return max_val;
    }
};