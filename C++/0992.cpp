class Solution
{
public:
    int ans(vector<int> &num, int t)
    {
        if (t == 0)
            return 0;

        int n = num.size(), total = 0, diff = 0, j = 0;

        vector<int> cnt(20002);

        for (int i = 0; i < n; i++)
        {
            if (cnt[num[i]] == 0)
                diff++;

            cnt[num[i]]++;

            if (diff <= t)
            {
                total += (i - j + 1);
            }
            else
            {
                while (j < n && j <= i && diff > t)
                {
                    cnt[num[j]]--;
                    if (cnt[num[j]] == 0)
                        diff--;
                    j++;
                }
                total += (i - j + 1);
            }
        }
        return total;
    }

    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        return ans(nums, k) - ans(nums, k - 1);
    }
};