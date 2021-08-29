class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> ans;
        int max_val = *max_element(candies.begin(), candies.end());

        for (int i = 0; i < candies.size(); i++)
        {
            if (extraCandies + candies[i] >= max_val)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};