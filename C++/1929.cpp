class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> ans = nums;

        for (auto c : nums)
            ans.push_back(c);

        return ans;
    }
};