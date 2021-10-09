#include <bits/stdc++.h>
using namespace std;

int minSideJumps(vector<int>& obstacles) {
    int n = obstacles.size();
    long dp[3][n];
    memset(dp, 1e6, sizeof(dp));
    dp[1][0] = 0, dp[0][0] = 1, dp[2][0] = 1;
    for(int i=1;i<n;i++){
        for(int j=0;j<3;j++){
            int prev = obstacles[i-1], curr = obstacles[i];
            if(curr == (j+1)) dp[j][i] == INT_MAX;
            else{
                if(prev == j+1){
                    dp[j][i] = 2 + min(dp[(j+1)%3][i-1], dp[(j+2)%3][i-1]);
                }
                else dp[j][i] = dp[j][i-1];
            }
        }
        if(dp[0][i]!=INT_MAX) dp[0][i] = min(dp[0][i], min(1+dp[1][i], 1+dp[2][i]));
        if(dp[1][i]!=INT_MAX) dp[1][i] = min(dp[1][i], min(1+dp[0][i], 1+dp[2][i]));
        if(dp[2][i]!=INT_MAX) dp[2][i] = min(dp[2][i], min(1+dp[0][i], 1+dp[1][i]));
    }

    // Uncomment to see the DP matrix
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<n;j++) cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }
    long ans = INT_MAX;
    for(int i=0;i<3;i++) ans = min(ans, dp[i][n-1]);
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> obstacles(n+1);
    for(int i=0;i<=n;i++) cin>>obstacles[i];
    
    int ans = minSideJumps(obstacles);
    cout<<ans;
}