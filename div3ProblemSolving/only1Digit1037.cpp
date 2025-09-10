#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int res=INT_MAX;
        for(;;){
            res=min(res,x%10);
            x/=10;
            if(x==0) break;
        }
        cout<<res<<endl;
    }
}
