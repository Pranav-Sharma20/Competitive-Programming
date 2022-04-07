#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int rem = n % 4;

    if (rem == 0)
    {
        cout << n / 4 << endl;
    }
    else
    {
        cout << (n / 4) + 1 << endl;
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