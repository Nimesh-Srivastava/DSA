class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        //Checking for edge case
        if(target >= letters[letters.size() - 1])
            return letters[0];
        
        //implementing binary search
        int first = 0, mid = 0, last = letters.size()-1;
        
        while(first <= last){
            
            mid = first + (last - first) / 2;
            
            if(target >= letters[mid])
                first = mid + 1;
            else
                last = mid - 1;
        }
        
        return letters[first];
    }
};
