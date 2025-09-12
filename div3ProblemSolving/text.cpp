#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n; i++) {
            int b;
            string moves;
            cin >> b >> moves;

            for (char c : moves) {
                if (c == 'U') {
                    a[i]--;           // উল্টো effect
                    if (a[i] < 0) a[i] = 9;
                } else {
                    a[i]++;           // উল্টো effect
                    if (a[i] > 9) a[i] = 0;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
