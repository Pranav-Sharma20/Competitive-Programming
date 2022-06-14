//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    int n; 
    cin >> n;

    ll ans = 0;

    string s, x, furr;
    cin >> s >> x;

    for(int i = 0; i< n; i++){
        if(s[i]!=x[i]){
            furr += x[i];
        }
    }

    sort(furr.begin(), furr.end());

    for(int i =0; i< furr.size()-1; i++){
        if(furr[i] != furr[i+1]){
            ans++;
        }
    }
    cout << ans+1 << endl;
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