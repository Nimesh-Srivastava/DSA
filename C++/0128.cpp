class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        unordered_map<int, int> m1;
        int ans{1};

        for (const auto &i : nums)
        {
            if (!m1[i])
            {
                m1[i] = 1;
                int left_limit{m1[i - 1]}, right_limit{m1[i + 1]};
                m1[i - left_limit] = m1[i + right_limit] = left_limit + right_limit + 1;
                ans = max(ans, left_limit + right_limit + 1);
            }
        }
        return ans;
    }
};
