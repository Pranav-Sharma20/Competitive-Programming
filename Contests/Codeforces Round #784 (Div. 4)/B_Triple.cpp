#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)


void solve() {
    ll n;
    cin >> n;

    unordered_map<ll, ll> m;

    forn(i,n){
        ll a;
        cin >> a;

        m[a]++;
    }

    for(auto i : m){
        if(i.second >= 3){
            cout << i.first << endl;
            return;
        }
    }
    cout << -1 << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
         solve();
    }
    return 0;
}