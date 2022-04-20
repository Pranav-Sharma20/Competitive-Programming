#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    forn(i, n)
    {
        cin >> a[i];
    }

    int f = *min_element(a.begin(), a.end());
    int p = *max_element(a.begin(), a.end());

    // cout << f << "  " << p << endl;
    ll sum = 0;
    for (auto x : a)
        sum += x;

    // cout << "sum : " << sum << endl;
    sum += p + n - f;
    
    if (sum <= m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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