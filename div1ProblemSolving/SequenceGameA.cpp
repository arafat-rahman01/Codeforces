#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0;i<n;i++) cin>>a[i];
        int x;
        cin >> x;
        int mi= *min_element(a.begin(), a.end());
        int ma= *max_element(a.begin(), a.end());
        if (x>= mi && x<=ma)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
}