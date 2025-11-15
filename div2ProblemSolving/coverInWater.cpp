#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]=='#'){
                sum=sum+count;
                count =0;
            }
            if(arr[i]=='.'){
                count++;
            }
            if(count>2){
                sum=2;count=0;
                break;
            }
        }
        sum=sum+count;
        cout<<sum<<endl;
    }
}