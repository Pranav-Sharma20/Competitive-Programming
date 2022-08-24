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
    int n, m;
    cin >> n >> m;
    ll cnt1 = 0, cnt0 = 0;

    vector<vector<char>> a(n, vector<char>(m,'0'));
    for(auto &i: a){
        for(auto &j : i){
            cin >> j;
        }
    } 
    for(auto &i: a){
        for(auto &j:i){
            if(j == '1'){
                cnt1++;
            } else {
                cnt0++;
            }
        }
    }  
    
    if(cnt0 == 0){
        cout << cnt1 - 2 << endl;
        return;
    } else if(cnt1 == 0){
        cout << 0 << endl;
        return;
    }

    
    bool flag = false;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if((j+1 < m && a[i][j] == '0' && a[i][j+1] == '0') || (i+1 < n && a[i][j] == '0' && a[i+1][j] == '0') || (i+1 < n && j+1 < m && a[i][j] == '0' && a[i+1][j+1] == '0') || (i+1 < n && j-1 >= 0 && a[i][j] == '0' && a[i+1][j-1] == '0'))
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
            break;
        }
        if(flag)
        cout << cnt1 << endl;
        else
        cout << cnt1-1 << endl;

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