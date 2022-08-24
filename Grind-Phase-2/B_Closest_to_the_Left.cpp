//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)
//for(auto i: a)
    //cout << i.first << ' ' << i.second << endl;
//cout << endl;


int Closest_to_the_Left(vector<ll>& a, ll target){
    int n = a.size();

    int l=-1;  // a[l] <= x
    int r = n; // a[r] > x
    int mid = 0;

    while(l+1<r){

        mid = l + (r-l)/2;
        if(a[mid] <= target){
            l = mid;
        } else if(a[mid] > target){
            r = mid;
        }
    }
    return l+1;    
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
        cout << Closest_to_the_Left(a, target) << endl;
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