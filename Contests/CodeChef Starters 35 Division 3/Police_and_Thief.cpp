#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)

void solve()
{
    int x, y;
    cin >> x >> y;

    ll sec = 0;

    if(x<=y){
        while (x != y)
        {
            x += 2;
            y += 1;
            sec++;
        }
    }
    else{
        cout << x-y << endl;
        return;
    }
    cout << sec << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
