#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s;cin>>s;
        bool f=true;
        for(int a=0;a<k;a++){
            int c=0;
            for(int i=a;i<n;i+=k){
                if(s[i]=='1') c++;
            }
            if(c%2){
                f=false;
                break;
            }
        }
        cout<<(f?"YES":"NO")<<endl;
    }
}