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
    vector<ll> b(n);
    map<ll,ll> mp;

    for(auto &i: a) cin >> i;
    for(auto &i: b){
        cin >> i;
        mp[i]++;
    }

    // while(!pq.empty()){
    //     int ele = pq.top();
    //     cout << ele << endl;
    //     pq.pop();
    // }
    int ind = 0;

    for(int i=0; i<n; i++){
        while(a[i] > b[ind]){
            ind++;
        }
        cout << b[ind] - a[i] << " ";
    }cout << endl;

    // Max wala start ho rha h 
    vector<int> ans;

    // cout << "---------" << endl;
    for(int i=n-1; i>=0; i--){
        ans.push_back(mp.rbegin()->first - a[i]);
        auto l = mp.lower_bound(a[i]);
        ll ele = l->first;
        // cout << ele << endl;
        mp[ele]--;
        if(mp[ele] == 0){
            mp.erase(ele);
        }
    }
    // cout << "----------" << endl;
    reverse(ans.begin(), ans.end());
    for(auto i: ans){
        cout << i << " ";
    }cout << "\n";
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
