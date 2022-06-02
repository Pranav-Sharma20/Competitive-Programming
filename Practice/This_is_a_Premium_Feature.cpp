#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    int n, r;
    cin >> n >> r;

    vector<ll> cost(n), cash(n), dif(n);

    for(auto &i : cost){
        cin >> i;
    }
    for(auto &i : cash){
        cin >> i;
    }

    unordered_map<ll,ll> m,p;

    for(int i=0; i< n; i++){
        ll diff = cost[i] - cash[i];
        dif[i] = diff;
        m[diff] = cost[i];
        p[diff] = cash[i];
    }

    sort(dif.begin(), dif.end());
    ll cnt = 0;

    for(auto i : dif){
        while(m[i] <= r){
            ll q = r/m[i];

            cnt+=q;
            r-=(q*m[i]);
            r+=(q*p[i]);
        }
    }

    cout << cnt << endl;
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