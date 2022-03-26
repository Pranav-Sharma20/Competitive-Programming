#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int first = 0, last = 0;
    int n = s.size(), ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            first = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            last = i;
            break;
        }
    }

    if (first == last)
    {
        cout << 0 << endl;
        return;
    }

    // cout << first << " : "<< last<<endl;
    for (int i = first; i <= last; i++)
    {
        if (s[i] == '0')
        {
            ans++;
        }
    }
    cout << ans << "\n";
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