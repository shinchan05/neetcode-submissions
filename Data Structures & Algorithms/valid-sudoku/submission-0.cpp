class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        for(int col=0;col<9;col++)
        {
      unordered_set<int > seen;
        for(int row=0;row<9;row++)
        {
            char val=board[row][col];
            if(val=='.')
            continue;
            if(seen.count(val))
            return false;
            seen.insert(val);
        }
        }
        for(int row=0;row<9;row++)
        {
      unordered_set<int > seen;
        for(int col=0;col<9;col++)
        {
            char val=board[row][col];
            if(val=='.')
            continue;
            if(seen.count(val))
            return false;
            seen.insert(val);
        }
        }
        for(int row=0;row<9;row+=3)
        {
        for(int col=0;col<9;col+=3)
        {
            unordered_set<int> seen;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    char val=board[row+i][col+j];
                    if(val=='.')
                    continue;
                    if(seen.count(val))
                    {
                        return false;
                    }
                    seen.insert(val);
                }
            }
        }
       }
       return true;
    }
};
