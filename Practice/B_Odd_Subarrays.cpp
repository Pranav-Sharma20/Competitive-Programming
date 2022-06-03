// This template is created by Pranav Sharma
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)
#define v(n) vector<int> a(n)

void solve()
{
    int n;
    cin >> n;
    v(n);

    for (auto &i : a)
    {
        cin >> i;
    }
    int cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            cnt++;
            i++;
        }
    }

    cout << cnt << endl;
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