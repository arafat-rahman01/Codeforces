#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,b,c,d ;
        cin>>a>>b>>c>>d ;
        if(d<b || (d-c)+(a-b)<0){
        cout<<-1<<endl;
        }else{
        cout<<2*(d-b)+(a-c)<<endl;
        }
    }
}