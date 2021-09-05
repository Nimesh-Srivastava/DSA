class Solution
{
public:
    vector<vector<int> > fourSum(vector<int> &nums, int target)
    {
        vector<vector<int> > res;

        if (nums.empty())
            return res;

        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int target_2 = target - nums[j] - nums[i];
                int front = j + 1;
                int back = n - 1;

                while (front < back)
                {
                    int sum = nums[front] + nums[back];
                    if (sum < target_2)
                        front++;
                    else if (sum > target_2)
                        back--;
                    else
                    {
                        vector<int> ans(4, 0);
                        ans[0] = nums[i];
                        ans[1] = nums[j];
                        ans[2] = nums[front];
                        ans[3] = nums[back];
                        res.push_back(ans);

                        while (front < back && nums[front] == ans[2])
                            front++;

                        while (front > back && nums[back] == ans[3])
                            back--;
                    }
                }
                //to skip 2nd pointer duplicates
                while (j + 1 < n && nums[j + 1] == nums[j])
                    j++;
            }
            //to skip 1st pointer duplicates
            while (i + 1 < n && nums[i + 1] == nums[i])
                i++;
        }
        return res;
    }
};
