#include <bits/stdc++.h>
using namespace std;

vector<int> printNonRepeated(int arr[],int n);


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    vector<int> v;
	    v = printNonRepeated(arr,n);
	    
	    for(int i=0;i<v.size();i++)  
	        cout<<v[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}

// } Driver Code Ends


// Function to print the non repeated elements in the array
// arr[]: input array
// n: size of array
vector<int> printNonRepeated(int arr[],int n) {

vector<int> ans;
unordered_map<int,int> mp;

for(int i = 0 ; i < n ; i++) {
mp[arr[i]]++;
}

for(int i = 0 ; i < n ; i++) {
int num = arr[i];
if(mp[num] == 1)
ans.push_back(num);
}

return ans;
}