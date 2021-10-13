#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      
        int i;
        vector<int>nums;
        for(i=0;i<N;i++)
        {
            nums.push_back(arr[i]);
        }
        int count=0,mx=0;
        unordered_set<int>s;
        for(i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        vector<int>v;
        for(auto x:s)
        {
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        count=1;
        if(v.size()==0||v.size()==1)
        {
            return v.size();
        }
        count=1;
        for(i=0;i<v.size()-1;i++)
        {
            
            if(v[i+1]==v[i]+1)
                count++;
            else
            {
                mx=max(mx,count);
                count=1;
            }
            mx=max(mx,count);
        }
        return mx;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends