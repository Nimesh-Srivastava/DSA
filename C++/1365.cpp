class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> freq(101);

        //create frequency array
        for (int i = 0; i < nums.size(); i++)
        { 
            freq[nums[i]]++;
        }

        // add frequencies uptil previous elements
        for (int i = 1; i < 101; i++)
        { 
            freq[i] = freq[i] + freq[i - 1];
        }

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                ans.push_back(0);
            else
                ans.push_back(freq[nums[i] - 1]); // -1 to remove counting duplicate
        }
        return ans;
    }
};
