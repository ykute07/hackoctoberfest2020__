#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums, int target, int i, int &ans){
    if(i<0) return;
    if(i==0 && nums[i]==abs(target)){
        if(target==0) ans += 2;
        else ans++;
        return;
    }
    solve(nums, target-nums[i], i-1, ans);
    solve(nums, target+nums[i], i-1, ans);
}

int findTargetSumWays(vector<int>& nums, int target) {
    int n = nums.size();
    int ans = 0;
    solve(nums, target, n-1, ans);
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int target;
    cin>>target;

    int ans = findTargetSumWays(nums, target);
    cout<<ans;
}