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
    ll n,w,i,j,ans=0;
    cin>>n>>w;
    vector<ll> a(n);
    forn(i,n) cin>>a[i];
    ll s=0,v=(w+1)/2,c=0;
    forn(i,n)
    {
        if(a[i]>=v && a[i]<=w)
        {
            cout<<"1\n"<<i+1<<endl;
            return;
        }
        if(a[i]>w) continue;
        s+=a[i];
        c++;
        if(s>=v) break;
    }
    if(s<v)
    {
        cout<<"-1\n";
        return;
    }
    s=0;
    cout<<c<<endl;
    forn(i,n)
    {
        if(s>=v) break;
        if(a[i]<v)
        {
            cout<<i+1<<" ";
            s+=a[i];
        }
    }
    cout<<endl;
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