#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n+1);
        for (int i = 1; i <= n; i++) cin >> arr[i];
        vector<int> pref(n+1, 0);
        for (int i = 1; i <= n; i++) pref[i] = pref[i-1] + arr[i];
        bool found = false;
        int L=0, R=0;
        for (int l = 1; l < n && !found; l++) {
            for (int r = l+1; r < n; r++) {
                int s1 = (pref[l] - pref[0]) % 3;
                int s2 = (pref[r] - pref[l]) % 3;
                int s3 = (pref[n] - pref[r]) % 3;
                if ((s1==s2 && s2==s3) || (s1!=s2 && s1!=s3 && s2!=s3)) {
                    L=l; R=r;
                    found = true;
                    break;
                }
            }
        }
        if (found) cout << L << " " << R << "\n";
        else cout << "0 0\n";
    }
}
