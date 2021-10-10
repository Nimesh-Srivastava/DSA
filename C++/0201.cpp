class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
      //Following commented code is not neccessary, but it can help 
      //improve speed in certain cases
      /*
        if(left == 0 || right == 0)
            return 0;
        
        if(left == right)
            return left;
        
        if((int)log2(left) != (int)log2(right))
            return 0;
        */
        
        int count = 0;
        
        while(left != right){
            left = left >> 1;
            right = right >> 1;
            count++;
        }
        
        return left << count;
    }
};
