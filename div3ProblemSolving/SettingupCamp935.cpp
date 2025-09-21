#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;
        long long tents = a;
        if(b % 3 == 0){
            tents += b/3;
        }
        else if(b % 3 == 1){
            if(c < 2){
                cout << -1 << endl;
                continue;
            }
            tents += b/3 + 1;
            c -= 2;
        }
        else{
            if(c < 1){
                cout << -1 << endl;
                continue;
            }
            tents += b/3 + 1;
            c -= 1;
        }
        tents += (c + 2) / 3;
        cout << tents << endl;
    }
}
