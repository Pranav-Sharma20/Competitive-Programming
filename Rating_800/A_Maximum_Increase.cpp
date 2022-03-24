#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int maxi = 1, curr = 1;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {

        if (a[i] >= a[i + 1])
        {
            maxi = max(maxi, curr);
            curr = 1;
        }
        else
        {
            curr++;
        }
    }
    maxi = max(maxi, curr);
    cout << maxi << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}