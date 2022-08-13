//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)



void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n,0);
    forn(i,n){
        cin>>arr[i];
    }  
    ll i=0,j=0;
    ll total=0;
    ll maxi=INT_MIN;

    while(i<n){
        total+=arr[i];
        if(total==k){
            maxi=max(maxi,i-j+1);
        }else{
            while(total>k){
                total-=arr[j];
                j++;
            }
            if(total==k){
                maxi=max(maxi,i-j+1);
            }
        }
        i++;
    }
    if(maxi==INT_MIN){
        cout << -1 << endl;
        return;
    }else{
        ll r=n-maxi;
        cout << r << endl;
        return;
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