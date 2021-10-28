class Solution
{
public:
    int maximumWealth(vector<vector<int> > &accounts)
    {
        int max_val = INT_MIN;

        for (int i = 0; i < accounts.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                sum = sum + accounts[i][j];
            }
            max_val = max(max_val, sum);
        }
        return max_val;
    }
};