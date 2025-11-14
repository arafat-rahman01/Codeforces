#include <iostream>
using namespace std;
int n, c, ml = 1000000001, t;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> t;
        t = (t - i + n) / n;
        if (t < ml)
        {
            ml = t;
            c = i;
        }
    }
    cout << c;
}
