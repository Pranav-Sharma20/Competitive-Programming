#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, x;
    cin >> n >> x;

    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;
        sum += a;
    }

    int y = (n * x) - sum;

    if (y <= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << y << endl;
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