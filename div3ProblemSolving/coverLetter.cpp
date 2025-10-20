#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int min_val = arr[0];
        int max_val = arr[n-1];
        int steps;
        if (s <= min_val) {
            steps = max_val - s;
        } else if (s >= max_val) {
            steps = s - min_val;
        } else {
            steps = (max_val - min_val) + min(s - min_val, max_val - s);
        }
        cout << steps << endl;
    }
}