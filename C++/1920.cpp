class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        vector<int> ans;

        for (auto c : nums)
            ans.push_back(nums[c]);

        return ans;
    }
};