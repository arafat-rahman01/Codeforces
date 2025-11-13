#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(arr[i]<0) c1++;
            if(arr[i]==0) c2++;
        }
        if(c1%2==0) cout<<c2<<endl;
        else cout<<2+c2<<endl;
    }
}