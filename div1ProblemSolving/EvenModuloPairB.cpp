#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        bool f=false;
        for(int i=0;i<n-1 && !f;i++){
            for(int j=i+1;j<n;j++){
                if(((a[j]%a[i])%2)==0){
                    cout<<a[i]<<" "<<a[j]<<endl;
                    f=true;
                    break;
                }
            }
        }
        if(!f) cout<<"-1"<<endl;
    }
}