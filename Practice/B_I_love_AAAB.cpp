#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    if (s[n - 1] != 'B')
    {
        cout << "NO" << endl;
        return;
    }
    if (s[0] == 'B')
    {
        cout << "NO" << endl;
        return;
    }

    ll a = 0, b = 0;

    forn(i, n)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            b++;
            if (a < b)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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