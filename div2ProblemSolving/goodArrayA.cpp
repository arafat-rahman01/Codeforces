#include<stdio.h>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i] ;
        }
        int  ans = 0;
        for(int i = 0;i<n-1;i++){
            if(a[i]%2==0 && a[i+1]%2==0){
               ans++;
            }
            else if(a[i]%2==1 && a[i+1]%2==1){
                ans++; 
            }
            else{
               

            }
        }
        cout << ans << endl;
    }
}