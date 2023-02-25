// Approach 1 (recursion)
//leetcode link: https://leetcode.com/problems/n-queens/description/
// TC: 0=o(n! * n)
// function :- vector < vector < string >> solveNQueens(int n)

class Solution {
public:
    bool isSafe1(int row, int col, vector<string> board, int n) {
      // check upper element
      int duprow = row;
      int dupcol = col;

      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
        {
          return false;
        }
        row--;
        col--;
      }

      col = dupcol;
      row = duprow;
      while (col >= 0) {
        if (board[row][col] == 'Q')
        {
          return false;
        }
        col--;
      }

      row = duprow;
      col = dupcol;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
        {
          return false;
        }
        row++;
        col--;
      }
      return true;
    }

  public:
    void solve(int col, vector<string>  board, vector<vector<string>> & ans, int n) {
      if (col == n) {
        ans.push_back(board);
        return;
      }
      for (int row = 0; row < n; row++) {
        if (isSafe1(row, col, board, n)) {
          board[row][col] = 'Q';
          solve(col + 1, board, ans, n);
          board[row][col] = '.';
        }
      }
    }

  public:
    vector < vector < string >> solveNQueens(int n) {
      vector<vector<string>> ans;
      vector<string> board(n);
      string s(n, '.');
      for (int i = 0; i < n; i++) 
      {
        board[i] = s;
      }
      solve(0, board, ans, n);
      return ans;
    }
};


// Approach 2 (recursion)
//leetcode link: https://practice.geeksforgeeks.org/problems/n-queen-problem0315/1
// TC: 0=o(n!)
// function vector<vector<int>> nQueen(int n)

class Solution{
public:

    vector<vector<int>> ans;
   vector<int> v;
   
   bool valid(int row,int col,int n,vector<vector<char>> &board){
       int i = row, j = col;
       
       while(i >= 0 && j >= 0){
           if(board[i][j] == 'Q') return (false);
           i--;
           j--;
       }
       
       j = col;
       while(j >= 0){
           if(board[row][j] == 'Q') return (false);
           j--;
       }
       
       i = row, j = col;
       while(i < n && j >= 0){
           if(board[i][j] == 'Q') return (false);
           i++;
           j--;
       }
       
       return (true);
   }
   
   void helper(int col,int n,vector<vector<char>> &board){
       if(col == n){
           ans.push_back(v);
           return;
       }
       
       for(int row = 0; row < n; row++){
           if(valid(row,col,n,board)){
               v.push_back(row+1);
               board[row][col] = 'Q';
               helper(col+1,n,board);
               board[row][col] = '.';
               v.pop_back();
           }
       }
   }
   
   vector<vector<int>> nQueen(int n) {
       vector<vector<char>> board(n,vector<char>(n,'.')); 
       helper(0,n,board);
       sort(ans.begin(),ans.end());
       return (ans);
   }
};
