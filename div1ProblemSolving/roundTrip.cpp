#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int r,r1,c=0,x,d,n;
        cin>>r>>x>>d>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(r>=x && s[i]=='1'){
                c++;
                if(r+d>=x) r1=r-d;
                else r1=r+d;
            }
            else if(r<x && s[i]=='2'){
                c++;
                if(r+d>=x) r1=r-d;
                else r1=r+d;
            }
            r=r1;
        }
        cout<<c<<endl;
    }
}