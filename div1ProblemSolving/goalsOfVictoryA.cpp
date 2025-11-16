#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int s=0;
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            s+=arr[i];
        }
        cout<<-s<<endl;
    }
}