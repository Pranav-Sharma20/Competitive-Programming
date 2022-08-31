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
    vector<char> v(n);
    vector<char> a(n);

    for(auto &i: v){
        cin >> i;
    }

    for(auto &i: a){
        cin >> i;
    }

     for(auto &i: v){
       
        if(i == 'G'){
            i = 'B';
        }
    }

    for(auto &i: a){
        
        if(i == 'G'){
            i = 'B';
        }
    }

    // for(auto i: a){
    //     cout << i << " ";
    // } cout << endl;

    // for(auto i: v){
    //     cout << i << " ";
    // } cout << endl;

    if(v == a){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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