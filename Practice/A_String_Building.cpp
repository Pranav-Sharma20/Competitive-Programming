#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)

void solve()
{
    string arr;
    cin >> arr;

    int n = arr.length();

    for (int i = 0; i < n;)
    {

        int c = 0;
        for (int j = i; j < n; j++)
        {

            if (arr[i] != arr[j])
                break;
            c += 1;
        }
        if (c < 2)
        {
            cout << "NO" << endl;
            return;
        }
        i += c;
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