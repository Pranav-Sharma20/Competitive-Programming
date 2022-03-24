#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, b;
    cin >> n;
    int a[105];

    for (int i = 1; i <= n; i++)
    {
        cin >> b;
        a[b] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}