#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unordered_set<char> s{'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y'};

    string str, ans;
    cin >> str;

    for (auto i : str)
    {
        if (s.find(i) == s.end())
        {
            char ch;
            ch = tolower(i);
            ans = ans + '.' + ch;
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}