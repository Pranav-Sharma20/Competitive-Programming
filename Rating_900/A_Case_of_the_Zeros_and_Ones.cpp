#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int x = 0, y = 0;

    for (auto i : s)
    {
        if (i == '0')
        {
            y++;
        }
        else
        {
            x++;
        }
    }

    int ans = min(x, y);

    cout << n - (2 * ans) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}