#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        ll i1 = 2;
        ll f = 0;
        while (true)
        {
            for (ll &s : a)
            {

                if (gcd(i1, s) == 1)
                {
                    cout << i1;
                    f = 1;
                    break;
                }
            }
            if (f)
            {
                break;
            }

            i1++;
        }
        cout << '\n';
    }
}