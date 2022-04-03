#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, d;
    cin >> n >> d;

    int i = 1;
    while (i <= n)
    {
        if (i % d == 0)
        {
            n++;
        }
        i++;
    }
    cout << i - 1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    solve();
    return 0;
}