#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, i = 0, last = 0, current = 0;
    cin >> a;
    while (a > 0)
    {
        i++;
        current = last + i;         
        last = current;
        a -= current;
        if (a < 0)
        {
            i--;
        }
    }
    cout << i;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}