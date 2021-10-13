#include <bits/stdc++.h>
using namespace std;

int maxSatisfaction(vector<int>& satisfaction) {
    int n = satisfaction.size();
    sort(satisfaction.begin(), satisfaction.end());
    int sum = 0, i = 0, j = 0;
    while(i<n && satisfaction[i]<0) i++;
    if(i==n) return 0;
    int k = i-1;
    int res = 0;
    while(i<n){
        res += satisfaction[i];
        sum += (++j)*satisfaction[i++];
    }
    while(k>=0){
        int temp = satisfaction[k] + sum + res;
        res += satisfaction[k];
        sum = max(sum, temp);
        k--;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector<int> satisfaction(n);
    for(int i=0;i<n;i++) cin>>satisfaction[i];

    int ans = maxSatisfaction(satisfaction);
    cout<<ans;
}