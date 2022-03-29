#include <bits/stdc++.h>
using namespace std;

void solve()
{
    set<char> st{'H', 'Q', '9'};
    string s;
    cin >> s;

    for (auto i : s)
    {
        if (st.find(i) != st.end())
        {
            cout << "YES"
                 << "\n";
            return;
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