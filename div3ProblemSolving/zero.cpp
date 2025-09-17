#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            cout << 0 << "\n";
            return 0;
        }
    }
    int ans = abs(arr[0]);
    for (int i = 1; i < n; i++) {
        ans = min(ans, abs(arr[i]));
    }
    cout << ans << "\n";
}
