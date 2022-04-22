#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)


void solve() {
    ll s, a;
    cin >> s >> a;

    vector<ll> ar(s);

    for(auto &i : ar){
        cin >> i;
    }
    
    ll ans = 0;

    ll m = *min_element(ar.begin(), ar.end());

    if(m>= a){
        cout << s << endl;
        return;
    }

    ans = ceil(a/float(m));

    cout << max(ans, s) << endl;
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