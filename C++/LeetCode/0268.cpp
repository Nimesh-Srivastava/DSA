// Enable the commented code to understand how the program works
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int siz = nums.size();
        int cnt = 0;
        
        for(auto& n : nums) {
            // cout << cnt + 1 << " iteration" << endl;
            // cout << siz << " ^ " << n << " : ";
            siz ^= n;
            // cout << siz << endl;
            // cout << siz << " ^ " << cnt << " : ";
            siz ^= cnt;
            // cout << siz << endl;
            cnt++;
        }
        return siz;
    }
};
