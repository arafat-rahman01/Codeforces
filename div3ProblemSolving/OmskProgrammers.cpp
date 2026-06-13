#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;

        if(a==b) cout<<0<<endl;
        else if((a+1==b || b+1==a) || (a/x==b && b/x==a)){
            cout<<"1: "<<1<<endl;
        }
        else if((a+1!=b && b+1!=a) && (a/x==0 && b/x==0)){
            cout<<"2: "<<2<<endl;
        }
        else if(a/x>b){
            cout<<"3: "<<(a/x)-b+1<<endl;
        }
        else if(b/x>a){
            cout<<"4: "<<(b/x)-a+1<<endl;
        }
        // else if(a/x<b){
        //     cout<<"5: "<<b-a/x+1<<endl;
        // }
        else if(b/x<a){
            cout<<"6 :"<<a-b/x+1<<endl;
        }

    }
}