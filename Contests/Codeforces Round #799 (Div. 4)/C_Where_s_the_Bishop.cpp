//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    vector<vector<char>> v(8);
    for(auto &I : v){
        for(int i=0; i<8; i++){
            char t;
            cin >> t;
            I.push_back(t);
        }
    }

    // for(auto i : v){
    //     cout << i  << endl;
    // }

    for(int i = 0; i< 8; i++){
        for(int j = 0; j< 8; j++){
            if(v[i][j] == '#' && i != 0 && j != 0 && i != 7 && j != 7){
                if(v[i-1][j-1] == '#' && v[i-1][j+1] == '#' && v[i+1][j-1] == '#' && v[i+1][j+1] == '#'){
                    cout << i+1 << " " << j+1 << endl;
                    return;
                }
                // cout << i << " " << j << endl;
            }
            // cout << v[i][j];
        }
        // cout << endl;
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