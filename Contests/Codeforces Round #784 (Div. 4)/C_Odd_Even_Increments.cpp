#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)

void solve()
{
    ll n;
    cin >> n;

    vector<int> a(n);

    forn(i, n)
    {
        ll av;
        cin >> av;

        a[i] = av % 2;
    }

    for (int i = 0; i < n - 2; i++)
    {
        if (a[i] != a[i + 2])
        {
            cout << "NO" << endl;
            return;
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