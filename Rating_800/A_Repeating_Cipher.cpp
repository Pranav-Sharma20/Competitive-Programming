#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string t, ans;
    cin >> n >> t;
    int j = 1;

    for (int i = 0; i < n; i += j)
    {
        j++;
        ans += t[i];
    }
    cout << ans << endl;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}