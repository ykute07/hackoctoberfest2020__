#include <bits/stdc++.h>
using namespace std;

bool safe(int i, int j, int r, int c){
    if(i<0 || j<0 || i>=r || j>=c) return false;
    return true;
}

bool dfs(vector<vector<char>>& board, vector<vector<bool>> &vis, int dx[], int dy[], int ind, int x, int y, string word, int r, int c){
    if(ind==word.size()) return true;
    vis[x][y] = true;
    for(int i=0;i<4;i++){
        int nx = x+dx[i], ny = y+dy[i];
        if(safe(nx, ny, r, c) && !vis[nx][ny]){
            // cout<<nx<<" "<<ny;
            if(board[nx][ny]==word[ind] && dfs(board, vis, dx, dy, ind+1, nx, ny, word, r, c)) return true;
        }
    }
    vis[x][y] = false;
    return false;
}

bool exist(vector<vector<char>>& board, string word) {
    int r = board.size(), c = board[0].size(), n = word.size();
    vector<vector<bool>> vis(r, vector<bool> (c, false));
    int dx[4] = {0,0,-1,1}, dy[4] = {1,-1,0,0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(vis[i][j]==false && board[i][j]==word[0]){
                // cout<<i<<" "<<j;
                if(dfs(board, vis, dx, dy, 1, i, j, word, r, c)) return true;
            }
        }
    }
    return false;
}

int main(){
    int m, n;
    cin>>m>>n;
    vector<vector<char>> board(m, vector<char>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) cin>>board[i][j];
    }
    string word;
    cin>>word;
    bool ans = exist(board, word);
    cout<<ans<<endl;
}