//Solution 1
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> v1, v2;
        int index = 0;
        int siz = nums.size() / 2;

        for (int i = 0; i < siz; i++)
        {
            v1.push_back(nums[i]);
            v2.push_back(nums[i + n]);
        }

        nums.clear();

        for (index = 0; index < siz; index++)
        {
            nums.push_back(v1[index]);
            nums.push_back(v2[index]);
        }

        return nums;
    }
};

//Solution 2
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> ans;

        for (int i = 0; i < nums.size() / 2; i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }
        return ans;
    }
};
