#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<set<ll>> arr(n);
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        while (a >= 1)
        {
            arr[i].insert(a);
            a /= 2;
        }
    }

    set<int> found;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j].count(i))
            {
                arr[j].clear();
                found.insert(i);
                break;
            }
        }
    }
    cout << (found.size() == n ? "YES" : "NO") << endl;
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