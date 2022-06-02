// This template is created by Pranav Sharma
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a){
        cin >> i;
    }
    if(n==1){
        a[0] == 1 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    else
    {
        sort(a.begin(), a.end(), greater<int>());
        a[0] - a[1] > 1?cout << "NO" << endl:cout << "YES" << endl;
    }
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