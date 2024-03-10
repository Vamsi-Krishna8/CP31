// Problem: A. Line Trip
// Contest: Codeforces - Educational Codeforces Round 158 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1901/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
	int n,x;
	cin>>n>>x;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	// sort(v.begin(),v.end());
	int ans1=v[0];
	for(int i=0;i<n-1;i++){
		ans1=max(ans1,v[i+1]-v[i]);
	}
	int ans2=2*(x-v[n-1]);
	cout<<max(ans1,ans2)<<endl;	
}
int32_t main(){
	int t;
    t=1;
    cin>>t;
    while(t--){

        // cout<<t;
        solve();
    }
    return 0;
}