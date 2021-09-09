//Solution 1:-
class Solution {
public:
    void rotate(std::vector<int>& arr, int k) {
        int n{int(arr.size())}, totalCount{n};
        for(int i{0}; i < n; i++){
            int curr{i}, swap{arr[i]};
            if(totalCount){
                do{
                    int j{0};
                    if(curr + k > n - 1) j = (curr + k) % n;
                    else j = curr + k;
                    std::swap(arr[j], swap);
                    curr = j;
                    totalCount--;
                } while(curr != i);
            }
        }
    }
};

//Solution 2:-
class Solution {
public:
    void rotate(std::vector<int>& arr, int k) {
        int n{int(arr.size())};
        k = k % n;
        std::reverse(arr.begin(), arr.end());
        std::reverse(arr.begin(), arr.begin() + k);
        std::reverse(arr.begin() + k, arr.end());
    }
};
