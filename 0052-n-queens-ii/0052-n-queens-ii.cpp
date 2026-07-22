class Solution {
public:
bool isSafe(vector<string>&board,int row,int j,int n)
{
    for(int i=0;i<n;i++)
    {
        if(board[row][i]=='Q')
        return false;
    }
     for(int i=0;i<n;i++)
    {
        if(board[i][j]=='Q')
        return false;
    }
    int i,k;
    for(i=row,k=j;i>=0 && k>=0;i--,k--)
    {
         if(board[i][k]=='Q')
        return false;

    }
    for(i=row,k=j;i>=0 && k<n;i--,k++)
    {
         if(board[i][k]=='Q')
        return false;

    }
    return true;
}

void NQueens(vector<string>&board,int row,int n,vector<vector<string>>&ans,int &p)
{
    if(row==n)
    {
        ans.push_back(board);
        p++;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(isSafe(board,row,i,n))
        {
        board[row][i]='Q';
        NQueens(board,row+1,n,ans,p);
        board[row][i]='.';
        }

    }
}
    int totalNQueens(int n) {

        vector<string>board(n, string(n, '.'));
        int row=0;
        int p=0;
        vector<vector<string>>ans;
        NQueens(board,row,n,ans,p);
        return p;
        
    }
};