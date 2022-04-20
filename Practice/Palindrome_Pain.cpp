#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)
/**
 *                ********code of Pranav Sharma*********
 */
void solve()
{
    ll x, y;
    cin >> x >> y;
    if ((x % 2 != 0 && y % 2 != 0) || x == 1 || y == 1)
    {
        cout << -1 << "\n";
    }
    else
    {
        if (x % 2 != 0 || y % 2 != 0)
        {
            ll temp1 = x;
            ll temp2 = y;
            x = x / 2;
            y = y / 2;
            string str1;
            str1 += 'a';
            str1 += 'b';
            x--;
            y--;
            while (x--)
            {
                str1 += 'a';
            }
            while (y--)
            {
                str1 += 'b';
            }
            string temp = str1;
            reverse(temp.begin(), temp.end());
            if (temp1 % 2 != 0)
            {
                str1 = str1 + "a" + temp;
            }
            else
            {
                str1 = str1 + "b" + temp;
            }

            string s2 = str1;
            swap(s2[0], s2[1]);
            swap(s2[s2.size() - 1], s2[s2.size() - 2]);
            cout << str1 << "\n";
            cout << s2 << "\n";
        }
        else
        {
            x = x / 2;
            y = y / 2;
            string str1;
            str1 += 'a';
            str1 += 'b';
            x--;
            y--;
            while (x--)
            {
                str1 += 'a';
            }
            while (y--)
            {
                str1 += 'b';
            }
            string temp = str1;
            reverse(temp.begin(), temp.end());
            str1 = str1 + temp;
            string s2 = str1;
            swap(s2[0], s2[1]);
            swap(s2[s2.size() - 1], s2[s2.size() - 2]);
            cout << str1 << "\n";
            cout << s2 << "\n";
        }
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