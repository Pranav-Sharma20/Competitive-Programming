#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    if (n & (n - 1))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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