class Solution {
public:
    int minOperations(vector<int>& v, int x) {
        
        int i, len = 0, sum1 = 0, sum2 = 0;
        
        for(i = 0; i < v.size(); i++)
            sum2 += v[i];
			
        sum2 -= x;
		
        if(sum2 == 0)
            return v.size();
		
        i = 0;
        
        for(int j = 0; j < v.size(); j++) {
            sum1 += v[j];
			
            while(i < v.size() && sum1 > sum2)
                sum1 -= v[i++];
				
            if(sum1 == sum2)
                len = max(len, j - i + 1);
        }
        
        if(!len)
            return -1;
        
        return v.size() - len;
    }
};
