#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t, a, b, n;
    cin >> t;
    while (t--) {
        cin >> a >> b >> n;
        if ((b*n) <= a || b >= a) cout << 1 << endl;
        else if ((b*n) > a && b < a) cout << 2 << endl;
    }
}