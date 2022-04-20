#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)


void solve() {
     ll n; 
    cin>>n; 
    vector<ll> arr(n,0); 
    ll oness=0; 
    ll twoss=0; 
    forn(i,n){ 
        cin>>arr[i]; 
        if(arr[i]==1) oness++; 
        if(arr[i]==2) twoss++; 
    } 
    ll first=0; 
    if(oness>0){ 
        first = oness*(n-1) - (oness*(oness-1))/2; 
    } 
    ll second = (twoss*(twoss-1))/2; 
    ll temp= first+second; 
    cout << temp << endl; 
    return; 
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