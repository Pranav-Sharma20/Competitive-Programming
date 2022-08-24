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

    vector<int> a(n);
    for(auto &i: a){
        cin >> i;
    }

    sort(a.begin(), a.end(), greater<int>());
    int ans = a[0] + a[1] - a[n-1] - a[n-2];
    cout << ans  << endl;


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