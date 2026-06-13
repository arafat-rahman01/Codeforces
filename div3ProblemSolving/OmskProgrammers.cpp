#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long a,b,x;
        cin>>a>>b>>x;
        if(a>b) swap(a,b);
        long long ans=LLONG_MAX;
        long long c=0;
        while(true){
            ans=min(ans,c+(b-a));
            if(a==b || b==0) break;
            b/=x;
            c++;
            if(a>b) swap(a,b);
        }
        cout<<ans<<endl;
    }
}