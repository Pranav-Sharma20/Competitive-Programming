#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            cout << "HARD"
                 << "\n";
            return;
        }
    }
    cout << "EASY"
         << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}