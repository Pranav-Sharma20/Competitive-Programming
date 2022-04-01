#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int Max = n;
    if (n / 10 > Max)
        Max = n / 10;
    if (n % 10 + (n / 100) * 10 > Max)
        Max = n % 10 + (n / 100) * 10;
    cout << Max;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}