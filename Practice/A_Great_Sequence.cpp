//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)


void solve() {
    int n, x;
    cin >> n >> x;
    
    vector<ll> arr;
    unordered_map<ll,ll> umap;

    for(int i=0; i<n; i++){
        ll ele;
        cin >> ele;

        arr.push_back(ele);
        umap[ele]++;
    }
    sort(arr.begin(), arr.end());
    ll ans = 0;
    for(auto i:arr){
        ll mul = i*x;
        if(umap.count(mul) && umap.count(i)){
            ans+=2;
            umap[i]--;
            umap[mul]--;
            if(umap[mul] == 0){
                umap.erase(mul);
            }
            if(umap[i] == 0){
                umap.erase(i);
            }
        }
    }
    cout << n-ans << endl;
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