#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)


// During Contest Solution -->>

// void solve()
// {
//     ll n, m;
//     cin >> n >> m;
//     if (n == 1 && m == 2 || n == 2 && m == 1)
//     {
//         cout << 1 << endl;
//         return;
//     }
//     if (n == 1 && m > 2 || n > 2 && m == 1)
//     {
//         cout << -1 << endl;
//         return;
//     }

//     if (n == m)
//     {
//         cout << n + m - 2 << endl;
//         return;
//     }
//     else
//     {
//         if (n > m && ((n % 2 == 0 && m % 2 == 0) || (n % 2 == 1 && m % 2 == 1)))
//         {
//             int r = n - m;
//             cout << ((n - r) + m - 2) + (r * 2) << endl;
//         }
//         else if (n < m && ((n % 2 == 0 && m % 2 == 0) || (n % 2 == 1 && m % 2 == 1)))
//         {
//             int r = m - n;
//             cout << (n + (m - r) - 2) + (r * 2) << endl;
//         }
//         else
//         {
//             if (m > n)
//             {
//                 int r = m - n;
//                 if (r == 1)
//                 {
//                     cout << (n + (m - r) - 2) + 1 << endl;
//                 }
//                 else
//                 {
//                     cout << (n + (m - r) - 2) + (r * 2) - 1 << endl;
//                 }
//             }
//             else
//             {
//                 int r = n - m;
//                 if (r == 1)
//                 {
//                     cout << ((n - r) + m - 2) + 1 << endl;
//                 }
//                 else
//                 {
//                     cout << (m + (n - r) - 2) + (r * 2) - 1 << endl;
//                 }
//             }
//         }
//     }
// }

// After Contest -->
void solve()
{
    ll n, m;
    cin >> n >> m;
    if ((n == 1 && m > 2) || (m == 1 && n > 2))
    {
        cout << -1 << endl;
        return;
    }

    if ((n % 2 == 0 && m % 2 == 0) || (n % 2 != 0) && (m % 2 != 0))
    {
        ll temp = max(n, m);
        ll result = ((temp - 1) * 2);
        cout << result << endl;
        return;
    }
    else
    {
        ll temp = max(n, m);
        ll result = ((temp - 1) * 2) - 1;
        cout << result << endl;
        return;
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