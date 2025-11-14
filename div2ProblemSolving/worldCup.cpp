#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n; cin >> n;
    vector <ll> arr(n);
    for (auto &i : arr) cin >> i;
    ll a;
    for (ll i=0;i<n;i++) {
        a = min(a, arr[i] / n);
    }
    int k = 0,ind = 0;
    for (int i = 0;i<2*n;i++) {
        if (i < n) arr[i] -= a * n;
        if (arr[i%n] - k <= 0) {
            ind = i;
            break;
        }
        ++k;
    }
    cout << (ind % n) + 1 << endl;
}
