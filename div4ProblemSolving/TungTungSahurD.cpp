#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string p,s;
		cin>>p>>s;
		while(p.size()){
			int pos=0;
			while(pos<p.size()&&p[pos]==p[pos+1])pos++;
			int num=pos+1;
			char c=p[pos];
			int k=0;
			while(k<s.size()&&s[k]==c)k++;
			if(k>=num&&k<=2*num)s.erase(0,k);
			else break;
			p.erase(0,num);
		}
		if(!s.size()&&!p.size())cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}