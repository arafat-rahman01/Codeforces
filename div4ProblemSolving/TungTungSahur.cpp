#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;cin>>s;
        string p;cin>>p;
        int f=true;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<p.length();){
                if((j<p.length()) && (s[i]!=p[j])){
                    f=false;
                }
                else if((j<p.length()) && (s[i]==p[j] && s[i]==p[j+1])){
                    j+=2;
                }
                else if((j+1<p.length()) && (s[i]==p[j] && s[i]!=p[j+1])){
                    j++;
                }
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}