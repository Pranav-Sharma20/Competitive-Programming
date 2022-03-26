#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    int ans = 0;
    cin >> n >> m;

    char v[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            v[i][j] = c;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i][m - 1] == 'R')
        {
            ans++;
        }
    }
    for (int i = 0; i < m - 1; i++)
    {
        if (v[n - 1][i] == 'D')
        {
            ans++;
        }
    }
    cout << ans << "\n";
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