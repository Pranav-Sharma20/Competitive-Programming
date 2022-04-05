#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char side;
    cin >> side;

    string s;
    cin >> s;

    if (side == 'L')
    {

        for (int i = 0; i < s.size(); i++)
        {
            int j = a.find(s[i]);
            cout << a[j + 1];
        }
    }
    else
    {

        for (int i = 0; i < s.size(); i++)
        {
            int j = a.find(s[i]);
            cout << a[j - 1];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}