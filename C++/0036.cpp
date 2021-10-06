//Solution using 3 hash maps
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int r = board.size();
        int c = board[0].size();
        
        unordered_map<char, int> row[9];
        unordered_map<char, int> col[9];
        unordered_map<char, int> box[9];
        
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                
                char ch = board[i][j];
                
                if(ch != '.' &&
                  (row[i][ch]++ > 0 || col[j][ch]++ > 0 || box[(i/3)*3 + j/3][ch]++ > 0))
                    return false;
            }
        }
        
        return true;
    }
};


//Solution using three 2D arrays
//Faster, better solution
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int row[9][9] = {0}, col[9][9] = {0}, box[9][9] = {0};
        
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                
                if(board[i][j] != '.'){
                    
                    int val = board[i][j] - '0' - 1;
                    int k = (i/3)*3 + (j/3);
                    
                    if(row[i][val] || col[j][val] || box[k][val])
                        return false;
                    
                    row[i][val] = col[j][val] = box[k][val] = 1;
                }
            }
        }
        
        return true;
    }
};
