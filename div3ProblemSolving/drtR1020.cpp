#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int c=0;
        string s2=s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                s2[i]='0';
                for(int j=0;j<s2.length();j++){
                    if(s2[j]=='1') c++;
                }
            } 
            else{
                s2[i]='1';
                for(int j=0;j<s2.length();j++){
                    if(s2[j]=='1') c++;
                }
            }
            s2=s;
        }
        cout<<c<<endl;
    }  
}