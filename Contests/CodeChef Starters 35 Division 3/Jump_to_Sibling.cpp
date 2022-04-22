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

    ll odd = 0, even = 0;

    for (auto &i : a)
    {
        cin >> i;
        if (i % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    bool flag = false;
    ll p = 0;

    // checking same parity or not
    if (a[0] % 2 == a[n - 1] % 2)
    {
        p = a[0] % 2;
        flag = true;
    }

    if (flag && p == 1)
    {
        cout << odd - 1 << endl;
    }
    else if (flag && p == 0)
    {
        cout << even - 1 << endl;
    }
    else
    {


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