#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll b = 0, r = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            r++;
        }
        else if (s[i] == 'B')
        {
            b++;
        }
        else
        {
            if (b == 0 && r == 0)
            {
                continue;
            }
            if (r == 0 || b == 0)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                r = 0;
                b = 0;
            }
        }
    }
    if (r == 0 && b == 0)
    {
        cout << "YES" << endl;
        return;
    }
    else if (r == 0 || b == 0)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        return;
    }
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
