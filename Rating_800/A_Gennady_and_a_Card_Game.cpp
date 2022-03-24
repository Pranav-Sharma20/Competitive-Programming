#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string t;
    cin >> t;
    for (int i = 0; i < 5; i++)
    {
        string s;
        cin >> s;
        if ((s[0] == t[0]) || (s[1] == t[1]))
        {
            cout << "YES"
                 << "\n";
            return;
        }
    }
    cout << "NO"
         << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}