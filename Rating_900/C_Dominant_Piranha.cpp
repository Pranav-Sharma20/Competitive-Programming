#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int mx = 0;
    for (auto &it : a)
    {
        cin >> it;
        mx = max(mx, it);
    }
    int idx = -1;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != mx)
            continue;
        if (i > 0 && a[i - 1] != mx)
            idx = i + 1;
        if (i < n - 1 && a[i + 1] != mx)
            idx = i + 1;
    }
    cout << idx << endl;
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