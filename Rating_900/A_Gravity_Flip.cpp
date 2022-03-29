#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        ans[i] = temp;
    }
    sort(ans.begin(), ans.end());

    for (auto i : ans)
    {
        cout << i << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    solve();
    return 0;
}