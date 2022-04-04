#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, ans = 0;
    cin >> n >> m;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0 && m != 0)
        {
            ans += abs(a[i]);
            m--;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}