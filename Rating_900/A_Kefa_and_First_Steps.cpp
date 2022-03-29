#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int maxcnt = 0, cnt = 1;
    for (int i = 0; i < n; i++) 
    {
        int temp;
        cin >> temp;
        a[i] = temp;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            maxcnt = max(maxcnt, cnt);
            cnt = 1;
        }
        else
        {
            cnt++;
        }
    }
    maxcnt = max(maxcnt, cnt);
    cout << maxcnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}