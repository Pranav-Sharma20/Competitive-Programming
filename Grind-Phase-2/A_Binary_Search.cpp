//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)
//for(auto i: a)
    //cout << i.first << ' ' << i.second << endl;
//cout << endl;


void Binary_Search(vector<ll> & a, ll target){
    int n = a.size();
    int l=0, r=n-1;

    while(l<=r){
        int mid = (l+r)/2;

        if(a[mid] == target){
            cout << "YES\n";
            return;
        } else if(a[mid] < target){
            l = mid+1;
        } else {
            r = mid-1;
        }
    }
    cout << "NO\n";
}

void solve() {
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n);
    for(auto &i: a){
        cin >> i;
    }

    forn(i,q){
        ll target;
        cin >> target;
        Binary_Search(a, target);
    }      
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--){
         solve();
    }
    return 0;
}