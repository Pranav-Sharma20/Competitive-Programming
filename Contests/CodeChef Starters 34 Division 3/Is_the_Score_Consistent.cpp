#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (c < a || d < b)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        cout << "POSSIBLE" << endl;
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