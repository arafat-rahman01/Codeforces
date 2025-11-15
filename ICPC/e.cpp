#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        set<long long> s;  
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            s.insert(x);
        }

        vector<long long> X(m), Y(m), Z(m);
        for (int i = 0; i < m; i++) {
            cin >> X[i] >> Y[i] >> Z[i];
        }

        bool ok = true;
        while (ok) {
            ok = false;
            for (int i = 0; i < m; i++) {
                if (s.count(X[i]) && s.count(Y[i]) && !s.count(Z[i])) {
                    s.insert(Z[i]);
                    ok = true;
                }
            }
        }

        cout << s.size() << "\n";
    }
}
