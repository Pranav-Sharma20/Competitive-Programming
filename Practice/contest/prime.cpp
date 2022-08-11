//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    string s;
    cin >> s;

    unordered_map<char, int> umap;
    for(auto i: s){
        umap[i]++;
    }

    unordered_map<string, int> mpp;
    mpp["zero"] = 0;
    mpp["one"] = 1;
    mpp["two"] = 2;
    mpp["Three"] = 3;
    mpp["four"] = 4;
    mpp["five"] = 5;
    mpp["six"] = 6;
    mpp["seven"] =7;
    mpp["eight"] = 8;
    mpp["nine"] = 9;

    for(int i=0; i<10; i++){
        
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