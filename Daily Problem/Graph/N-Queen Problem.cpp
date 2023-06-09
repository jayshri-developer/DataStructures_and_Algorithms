// link:- https://practice.geeksforgeeks.org/problems/n-queen-problem0315/1

// tc:- [TC: O(!N * N) / Aux. SC: O(N^2)]

class Solution{
public:
    
    bool isSafe(int row, int col, int n, vector<string> &board)
    {
         int duprow = row;
        int dupcol = col;
        
        while(row >= 0 && col >= 0)
        {
            if(board[row][col] == 'Q') 
            {
                return false;
            }
            row--;
            col--;
        }
        
        col = dupcol;
        row = duprow;
        
        while(col>=0)
        {
            if(board[row][col] == 'Q') return false;
            col--;
        }
        
        col = dupcol;
        row = duprow;
        
        while(row<n && col>=0)
        {
            if(board[row][col] == 'Q') return false;
            row++;
            col--;
        }
        
        return true;
    }
    void helper(int n, vector<vector<int>> &result, vector<int> &ans, vector<string> &board, int col)
    {
        if(n == col)
        {
            result.push_back(ans);
            return;
        }
        
        for(int row = 0; row < n; row++)
        {
            if(isSafe(row, col, n, board))
            {
                board[row][col] = 'Q';
                ans.push_back(row+1);
                
                helper(n, result, ans, board, col+1);
                ans.pop_back();
                board[row][col] = '.';
            }
        }
    }
    
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> result;
        vector<int> ans;
        vector<string> board(n, string(n, '.'));
        
        helper(n, result, ans, board, 0);
        
        return result;
    }
};

