//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    ll n,c,q;
    cin >> n >> c >> q;

    string s;
    cin >> s;

    while(c--){
        ll pos,r;
        cin >> pos >> r;
        
        ll len = r-pos+1;
        pos--;
        // cout << s.substr(pos,len) << endl;
        s += s.substr(pos,len);
        // cout << s << endl;
    }
    // cout << s << endl;
    while(q--){
        int k;
        cin >> k;
        cout << s[--k] << endl;
    }
    
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