#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);

    forn(i, n)
    {
        cin >> a[i];
    }

    if (a[0] != n && a[n - 1] != n)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = n - 1; i >= 0; i--)
        cout << a[i] << " ";
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