class Solution {
public:

    void help(int numRows,vector<vector<int>> &result, int index)
    {
        
        if(index == numRows)
        {
           return;
        }

        vector<int> temp;
       temp.push_back(1);
       for(int j = 0; j < index-1; j++)
       {
        temp.push_back(result[index-1][j] + result[index-1][j+1]);
       }
       temp.push_back(1);

       result[index] = temp;

        help(numRows, result, index+1);

    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        // vector<int> ans;
        int i = 0; 
        int j = 0;

        // vector<vector<int>> mat[i][j];

        result[i].push_back(1);
        if(numRows == 1)
        {
            return result;
        }
        result[i+1].push_back(1);
        result[i+1].push_back(1);
        if(numRows == 2)
        {
            return result;
        }


        help(numRows, result, 2);

        return result;
    }
};

// 1
// 2
// 4
// 8
// 16