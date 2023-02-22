// Approach 1 (recursion)
//gfg link:  https://practice.geeksforgeeks.org/problems/word-search/1
// TC: o(N*M*(4^L))

class Solution {
public:
    bool search(vector<vector<char>> &board, string word, int i, int j, int idx)
    {
        if(idx == word.size()) return true;
        if(i == board.size() || j == board[0].size() || i < 0 || j < 0 || board[i][j] != word[idx])
        {
            return false;
        }
        
        board[i][j] = '#';
        
        bool path1 = search(board,word,i,j+1,idx+1);
        bool path2 = search(board,word,i,j-1,idx+1);
        bool path3 = search(board,word,i+1,j,idx+1);
        bool path4 = search(board,word,i-1,j,idx+1);
        
        board[i][j] = word[idx];
        
        if(path1 || path2 || path3 || path4)
        {
            return true;
        }
        
        return false;
    }
    
    bool isWordExist(vector<vector<char>>& board, string word) 
    {
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[0].size(); j++)
            {
                if(board[i][j] == word[0])
                {
                    if(search(board, word, i, j, 0)) return true;
                }
            }
        }
        return false;
    }
};
