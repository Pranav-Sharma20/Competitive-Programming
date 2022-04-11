#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, m = -1;
    cin >> a >> b >> c;
    m = -1;

    if ((2 * b - c) % a == 0 && (2 * b - c) > 0)
    {
        m = (2 * b - c) / a;
    }
    else if ((a + c) % (2 * b) == 0)
    {
        m = (a + c) / (2 * b);
    }
    else if ((2 * b - a) % c == 0 && (2 * b - a) > 0)
    {
        m = (2 * b - a) / c;
    }

    if (m == -1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
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