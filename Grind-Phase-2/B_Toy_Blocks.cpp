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

    vector<ll> a(n);
    ll sum = 0;
    for(auto &i: a){
        cin >> i;
        sum += i;
    }

    ll r = (sum)/(n-1);
    if(sum%(n-1) != 0)r+=1;
    sort(a.begin(), a.end(), greater<ll>());

    if(a[0] <= r){
        ll q = (r*(n-1));
        cout << abs(q - sum) << endl;
    } else {
        ll q = (a[0] * (n-1));
        cout << abs(q - sum) << endl;
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