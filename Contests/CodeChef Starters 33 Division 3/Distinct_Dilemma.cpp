#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    int sum = 0, a = 0;

    for (auto &i : ans)
    {
        cin >> i;
        sum += i;
    }

    int ind = 1;

    while (sum > 0)
    {
        a++;
        sum -= ind;
        ind++;
    }

    cout << a << endl;
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