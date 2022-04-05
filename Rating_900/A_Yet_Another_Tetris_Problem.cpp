#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    int odd = 0, even = 0;

    for (int i = 0; i < n; i++)
    {
        ans[i] % 2 == 0 ? even++ : odd++;
    }

    if (odd == 0 || even == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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