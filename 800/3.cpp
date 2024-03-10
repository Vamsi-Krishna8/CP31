// Problem: A. Cover in Water
// Contest: Codeforces - Codeforces Round 911 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1900/A
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
	string s;
	cin>>s;
	bool flag=false;
	int count=0;
	for(int i=0;i<n;i++){
		if(s[i]=='.') count++;
	}
	for(int i=0;i<n-2;i++){
		if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
			flag=true;
			break;
		}
	}
	// cout<<"flag"<<" "<<flag<<endl;
	if(flag) cout<<2<<endl;
	else cout<<count<<endl; 	
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