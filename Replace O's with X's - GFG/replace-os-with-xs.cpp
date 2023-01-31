//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void helper(int i,int j,vector<vector<char>>& mat)
    {
        if(i<0 || j<0 || i>=mat.size() || j>=mat[0].size() || mat[i][j]!='O')
        return;
        mat[i][j]='!';
        helper(i+1,j,mat);
        helper(i-1,j,mat);
        helper(i,j+1,mat);
        helper(i,j-1,mat);
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> board)
    {
        // code here
         for(int i=0;i<board[0].size();i++)
        {
            if(board[0][i]=='O')
            {
                helper(0,i,board);
            }
            if(board[board.size()-1][i]=='O')
            {
                helper(board.size()-1,i,board);
            }
            
        }

        for(int i=0;i<board.size();i++)
        {
            if(board[i][0]=='O')
            {
                helper(i,0,board);
            }
            if(board[i][board[0].size()-1]=='O')
            {
                helper(i,board[0].size()-1,board);
            }
            
        }
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='O')
                board[i][j]='X';
                if(board[i][j]=='!')
                board[i][j]='O';
            }
        }
        return board;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends