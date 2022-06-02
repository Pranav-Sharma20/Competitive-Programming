// This template is created by Pranav Sharma
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    ll sum = 0;
    if (n == 1)
    {
        cout << "Bob " << s[0] - 'a' + 1 << endl;
        return;
    }
    if (n % 2 == 0)
    {
        for (auto i : s)
        {
            sum += i - 'a' + 1;
        }
        cout << "Alice " << sum << endl;
        return;
    }

    if (s[0] < s[n - 1])
    {
        for (int i = 1; i < n; i++)
        {
            sum += s[i] - 'a' + 1;
        }
        cout << "Alice " << sum - (s[0] - 'a' + 1) << endl;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            sum += s[i] - 'a' + 1;
        }
        cout << "Alice " << sum - (s[n - 1] - 'a' + 1) << endl;
    }
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