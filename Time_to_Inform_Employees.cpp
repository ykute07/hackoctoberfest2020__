#include <bits/stdc++.h>
using namespace std;

int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
    vector<int> adj[n];
    int head;
    for(int i=0;i<n;i++){
        if(manager[i]==-1) head = i;
        else adj[manager[i]].push_back(i);
    }
    queue<pair<int, int>> qu;
    qu.push({head, 0});
    int ans = -1;
    while(!qu.empty()){
        int m = qu.front().first, time = qu.front().second;
        qu.pop();
        ans = max(ans, time);
        for(auto v:adj[m]){
            qu.push({v, time+informTime[m]});
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int headID;
    cin>>headID;
    vector<int> manager(n), informTime(n);
    for(int i=0;i<n;i++) cin>>manager[i];
    for(int i=0;i<n;i++) cin>>informTime[i];

    int ans = numOfMinutes(n, headID, manager, informTime);
    cout<<ans;
}