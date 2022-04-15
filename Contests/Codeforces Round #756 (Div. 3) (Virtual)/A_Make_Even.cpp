#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }

    string s = to_string(n);

    if ((s[0] - '0') % 2 == 0)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] - '0') % 2 == 0)
            {
                cout << 2 << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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