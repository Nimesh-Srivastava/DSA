class Solution {
public:
    std::vector<int> constructArray(int n, int k) {
        std::vector<int> ans {1};
        bool add{true};
        int i{0};
        //push alternating sum/diffs of k to achieve the following absolute prefix diff
        //let n = 8 k = 5
        //absolute prefixDiff = 5 4 3 2 1
        while(k){
            if(add)
                ans.push_back(ans[i++] + k--);
            else
                ans.push_back(ans[i++] - k--);
            add = !add;
        }
        // the remaining differences will repeat to maintain the k distinct differences.
        ++i;
        ++k;
        for(; i < n; i++, k++){
            ans.push_back(ans[1] + k);
        }
        return ans;
    }
};
