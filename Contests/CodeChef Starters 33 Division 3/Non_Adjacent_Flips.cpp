#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << 0 << "\n";
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
        {
            cout << 2 << endl;
            return;
        }
    }

    cout << 1 << endl;
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