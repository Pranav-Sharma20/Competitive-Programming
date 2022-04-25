#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (auto &i : a)
    {
        cin >> i;
    }

    sort(a.begin(), a.end(), greater<int>());

    string ans = "maomao90";

    forn(i, n)
    {
        if (a[i] != 1)
        {
            if (a[i] % 2 == 0)
            {
                if (ans == "maomao90")
                {
                    ans = "errorgorn";
                }
                else
                {
                    ans = "maomao90";
                }
            }
        }
        else
        {
            continue;
        }
    }
    cout << ans << endl;
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