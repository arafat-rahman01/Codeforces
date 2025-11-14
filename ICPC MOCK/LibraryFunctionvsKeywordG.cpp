#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int c1=0,c2=0;
        bool f=true;
        for(int i=0;i<s.length();i++){
            if(s[i]!='0' && f){
                c1++;
            }
            else{
                f=false;
                c2++;
            }
        }
        cout<<c1+c2<<" "<<c1-1<<endl;
    }
}