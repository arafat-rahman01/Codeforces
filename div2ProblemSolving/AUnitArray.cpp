#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int neg = 0;
        int pos = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == -1)
            {
                neg++;
            }
            else
            {
                pos++;
            }
        }
        long long c = 0;
        while ((pos < neg) || (neg % 2 == 1))
        {
            c++;
            pos++;
            neg--;
        }
        cout << c << '\n';
    }
}