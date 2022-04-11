#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (auto &i : a)
    {
        cin >> i;
    }

    sort(a.begin(), a.end());
    set<int> st;

    for (auto i : a)
    {
        st.insert(i);
    }

    vector<int> v(st.begin(), st.end());

    for (auto i : st)
    {
        v.push_back(i);
    }

    long ans = 0;
    int m = a[0];
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            continue;
        }
        ans += (v[i + 1] - v[i]);
    }

    cout << ans << endl;
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