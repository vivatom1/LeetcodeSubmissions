class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int i,j;
        bool row[9][9];
        bool col[9][9];
        bool boxes[9][9];
        for(i=0;i<9;i++)
        {
            bool seen[10][10]={};
            for(j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                continue;
                int num=board[i][j]-'1';
                int boxi=(i/3)*3+(j/3);
                if(row[i][num]||col[j][num]||boxes[boxi][num])
                return false;
                  
                row[i][num] = true;
                col[j][num] = true;
                boxes[boxi][num] = true;
            }
        }
        return true;
    }
};