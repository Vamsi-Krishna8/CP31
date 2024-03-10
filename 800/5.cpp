// Problem: A. Jagged Swaps
// Contest: Codeforces - CodeTON Round 7 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/problemset/problem/1896/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	vector<int> s_v=v;
	sort(s_v.begin(),s_v.end());
	int times=n;
	while(times--){
		for(int i=0;i<n-2;i++){
			if(v[i]<v[i+1] && v[i+1]>v[i+2]) swap(v[i+1],v[i+2]);
		}		
	}
	if(s_v==v) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;	
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