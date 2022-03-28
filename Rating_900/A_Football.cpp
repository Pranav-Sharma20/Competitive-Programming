#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int curr1 = 0, curr0 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            curr1++;
            if (curr1 >= 7 || curr0 >= 7)
            {
                cout << "YES"
                     << "\n";
                return;
            }
            else
            {
                curr0 = 0;
            }
        }
        else
        {
            curr0++;
            if (curr1 >= 7 || curr0 >= 7)
            {
                cout << "YES"
                     << "\n";
                return;
            }
            else
            {
                curr1 = 0;
            }
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