class Solution {
public:
    int maximum69Number (int num) {
        int pos = 0;
        
        for(int i = 1; i < num; i *= 10)
            if ((num / i) % 10 == 6)
                pos = i;
        
        return num + (pos * 3);
    }
};
