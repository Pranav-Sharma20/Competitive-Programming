#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)

void solve()
{
    ll rating;
    cin >> rating;

    if (1900 <= rating)
    {
        cout << "Division 1" << endl;
    }
    else if (1600 <= rating && rating<= 1899)
    {
        cout << "Division 2" << endl;
    }
    else if (1400 <= rating && rating <= 1599)
    {
        cout << "Division 3" << endl;
    }
    else if (rating <= 1399)
    {
        cout << "Division 4" << endl;
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