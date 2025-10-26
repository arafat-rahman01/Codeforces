#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=stoi(s);
        int t=sqrt(n);
        if(t*t!=n){
            cout<<-1<<endl;
        }else{
            cout<<0<<" "<<t<<endl;
        }
    }
}