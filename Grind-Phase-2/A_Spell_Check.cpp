//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)
//for(auto i: a)
    //cout << i.first << ' ' << i.second << endl;
//cout << endl;



//Timur
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char,int> umap;

    for(auto i: s){
        umap[i]++;
    }

    if(umap.size() != 5){
        cout << "NO\n";
        return;
    }

    for(auto i: umap){
        if(umap['T'] != 1){
            cout << "NO\n";
            return;
        }
        if(umap['i'] != 1){
            cout << "NO\n";
            return;
        }
        if(umap['m'] != 1){
            cout << "NO\n";
            return;
        }
        if(umap['u'] != 1){
            cout << "NO\n";
            return;
        }
        if(umap['r'] != 1){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--){
         solve();
    }
    return 0;
}