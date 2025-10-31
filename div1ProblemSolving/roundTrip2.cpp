#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll r,x,d,n;
		cin>>r>>x>>d>>n;
		
		string s;
		cin>>s;
		
		ll ct=0;
		for(ll i=0;i<n;i++){
			if(s[i]=='1'){
				ct++;
				r = max(r-d,0ll);
				}
			else{
				if(r>=x) continue;
				else{
					ct++;
					r=max(r-d,0ll);
					}
				}
			}
		cout<<ct<<endl;
	}
}
