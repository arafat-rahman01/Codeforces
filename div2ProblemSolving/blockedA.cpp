#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int c=0;
        for(int i=0;i<n-2;i++){
            if(arr[i]+arr[i+1]==arr[i+2]){
                c=1;
                reverse(arr,arr+n);
                break;
            }else{
                c=0;
            }
        }
        if(c==0) cout<<"-1";
        else{
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
}