// Problem: A. Doremy's Paint 3
// Contest: Codeforces - Codeforces Round 906 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1890/A
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
	map<int,int> mp;
	for(int i=0;i<n;i++) {
		cin>>v[i];
		mp[v[i]]++;
	}
	if(mp.size()>=3) cout<<"No"<<endl;
	else if(mp.size()==2){
		int f=mp.begin()->second;
		int s=mp.rbegin()->second;
		int diff=abs(s-f);
		if(diff<=1){
			cout<<"Yes"<<endl;
		}
		else cout<<"No"<<endl;
	}
	else cout<<"Yes"<<endl;	
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