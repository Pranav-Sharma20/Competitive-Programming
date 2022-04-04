#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int y = n % 2020;

    int x = ((n - y) / 2020) - y;

    if (x >= 0)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
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
