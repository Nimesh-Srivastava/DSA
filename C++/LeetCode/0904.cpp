class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> m1;
        int i, j;
        
        for (i = 0, j = 0; j < fruits.size(); j++) {
            m1[fruits[j]]++;
            
            if (m1.size() > 2) {
                if (--m1[fruits[i]] == 0)
                    m1.erase(fruits[i]);
                
                i++;
            }
        }
        
        return j - i;
    }
};
