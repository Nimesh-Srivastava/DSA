class Solution
{
public:
    vector<int> twoSum(vector<int> &num, int target)
    {
        vector<int> result;
        unordered_map<int, int> map1;
        for (int i = 0; i < num.size(); i++)
        {
            if (map1.find(target - num[i]) != map1.end())
            {
                result.push_back(map1[target - num[i]]);
                result.push_back(i);
                return result;
            }
            map1[num[i]] = i;
        }
        return result;
    }
};