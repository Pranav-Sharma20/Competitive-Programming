//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(auto &i: v){
        cin >> i;
    }

    unordered_map<int, int> m;

    for(auto i : v){
        m[i]++;
    }

    for(auto &i : m){
        i.second = i.second -1;
    }
    ll sum = 0;
    for(auto &i : m){
        sum += i.second;
    }
    if(sum%2 == 0){
        cout << n-sum << endl;
    } else {
        cout << n-sum-1 << endl;
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