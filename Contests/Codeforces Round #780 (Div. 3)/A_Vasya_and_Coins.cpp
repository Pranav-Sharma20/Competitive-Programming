#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    if (n == 0 && m == 0)
    {
        cout << 1 << endl;
    }
    else if (n == 0 && m != 0)
    {
        cout << 1 << endl;
    }
    else if (n != 0 && m == 0)
    {
        cout << n + 1 << endl;
    }
    else
    {
        cout << n + (2 * m) + 1 << endl;
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