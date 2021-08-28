class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        unordered_map<int, int> hash;
        int ans{1};

        for (const auto &i : nums)
        {
            if (!hash[i])
            {
                hash[i] = 1;
                int left_limit{hash[i - 1]}, right_limit{hash[i + 1]};
                hash[i - left_limit] = hash[i + right_limit] = 1 + left_limit + right_limit;
                ans = max(ans, 1 + left_limit + right_limit);
            }
        }
        return ans;
    }
};