//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)
//for(auto i: a)
    //cout << i.first << ' ' << i.second << endl;
//cout << endl;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        ll n, ans = 0; 
        cin >> n;

        vector<ll> a(n),v,res;
        
        for(auto &i: a){
            cin >> i;
        }
        v = a;
        sort(v.begin(),v.end());

        forn(i,n){
            int pos=(upper_bound(v.begin(), v.end(), 2*a[i]) - v.begin());
            // cout << "begin() : " << pos << endl;
            if(pos==0 || (pos==1 && v[pos-1]==a[i]))
            res.push_back(-1);
            else
            res.push_back(v[pos-1-(a[i]==v[pos-1])]);
        }
        
        cout << "Case #" << i << ": " ;
        forn(i,n){
            cout << res[i] <<" ";
        } cout << endl;
        
    }
    return 0;
}