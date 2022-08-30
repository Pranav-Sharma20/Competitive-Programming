//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (ll i = 0; i < n; i++)
#define forr(i, n) for (ll i = n; i >=0; --i)
//for(auto i: a)
    //cout << i.first << ' ' << i.second << endl;
//cout << endl;

bool f(ll a, ll b,ll n,ll x){
    return (x/b)*(x/a) >= n;
}


void solve() {
    ll a,b,n;cin >> a >> b >> n;
    ll l=0;
    ll r=2;

    while(!f(a,b,n,r)){
        r*=2;
        f(a,b,r,n);
    }

    while(r>l+1){
        ll mid = l+(r-l)/2;
        if(f(a,b,n,mid)){
            r = mid;
        }else{
            l = mid;
        }
    }
    cout << r << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while(t--){
         solve();
    }
    
    return 0;
}