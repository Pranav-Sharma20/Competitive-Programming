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
    char a, b ,c ,d;

    cin >> a >> b >> c >> d;

    unordered_map<char, int> umap;

    umap[a]++;
    umap[b]++;
    

    umap[c]++;
    umap[d]++;

    if(umap.size() == 4){
        cout << "3\n";
    }else if(umap.size() == 3){
        cout << "2\n";
    }else if(umap.size() == 2){
        cout << "1\n";
    }else{
        cout << "0\n";
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