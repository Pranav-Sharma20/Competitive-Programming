#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)

void solve()
{
    ll n, r, b;
    cin >> n >> r >> b;
    ll m = r / (b + 1);
    ll temp = r % (b + 1);
    ll x = b + 1;
    string res = "";
    while (x--)
    {
        for (int i = 0; i < m; i++)
        {
            cout << 'R';
        }
        if (temp)
        {
            temp--;
            cout << 'R';
        }
        if (x > 0)
        {
            cout << 'B';
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}