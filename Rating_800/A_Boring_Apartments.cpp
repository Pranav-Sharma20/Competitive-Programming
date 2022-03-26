#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    string s = to_string(n);

    int cnt = s.size(), ans = 0;
    int num = s[0] - '0';

    for (int i = 1; i <= cnt; i++)
    {
        ans += i;
    }
    cout << (num - 1) * 10 + ans << "\n";
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