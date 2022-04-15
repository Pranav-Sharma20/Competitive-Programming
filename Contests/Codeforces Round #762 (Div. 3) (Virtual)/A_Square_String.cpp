#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    if (n % 2 == 1)
    {
        cout << "NO" << endl;
        return;
    }
    int i = 0;
    int j = n / 2;

    while (i < n / 2)
    {
        if (s[i] != s[j])
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            i++;
            j++;
        }
    }

    cout << "YES" << endl;
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