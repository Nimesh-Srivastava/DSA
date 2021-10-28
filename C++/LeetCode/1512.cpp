// solution using bruteforce
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    ans++;
            }
        }
        return ans;
    }
};

//Solution using hash maps (for large inputs)
class Solution2
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int ans = 0;
        unordered_map<int, int> m1;

        for (int i = 0; i < nums.size(); i++)
        {
            ans = ans + m1[nums[i]];
            m1[nums[i]]++;
        }
        return ans;
    }
};