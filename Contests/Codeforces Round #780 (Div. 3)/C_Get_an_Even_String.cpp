#include<bits/stdc++.h>
using namespace std;


void solve() {
    string s;
    cin >> s;
    int n = s.size();

    int cnt = 0;
    map<char, int> map;

    for(int i = 0; i< n; i++){
        map[s[i]]++;
        if(map[s[i]] == 2){
            cnt++;
            map.clear();
        }
    }
    cout << n - 2* cnt << "\n";
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