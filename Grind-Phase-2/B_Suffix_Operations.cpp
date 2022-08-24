

/*

    -3 -5 -2  1 
    -3 -5 -2 -2

    op - 3

*/


//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)
//for(auto i: a)
    //cout << i.first << ' ' << i.second << endl;
//cout << endl;


void solve() {
    int n;
    cin >> n;

    vector<ll>a(n);

    for(auto &i: a){cin >> i;}

    ll f = 0;
    for(int i = n-2; i>=0; i--){
        f += abs(a[i+1] - a[i]);
    }
    // cout << f << endl;

    ll tf = f;

    for(int i = n-2; i>0; i--){
        ll temp = f -( abs(a[i] - a[i+1]) + abs(a[i] - a[i-1]));
        tf = min(tf, temp + abs(a[i-1] - a[i+1]));
    }

    ll temp = f - abs(a[n-2] - a[n-1]);
    tf = min(tf, temp);

    temp = f - abs(a[0] - a[1]);
    tf = min(tf, temp);

    cout << min(tf,f) << endl;
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