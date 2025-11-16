#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >>a>>b>>n;
        long long moves=(n*b+a-1)/a;
        cout <<moves<<endl;
    }
}