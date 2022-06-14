// This template is created by Pranav Sharma
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)

// bitset<8>(123)
// cout << bitset<16>(n) << endl;
void solve()
{
    int n;
    cin >> n;

    int cnt = __builtin_popcount(n);
    string s = bitset<32>(n).to_string();
    string ans = "00000000000000000000000000000000";
    // cout << bitset<32>(n) << endl;
    // cout << s << endl;
    // cout << cnt << endl;
    if(cnt == 1){
        // cout << "krte h " << endl;    
        for(int i=31; i>=0; i--){
            if(s[i] == '1'){
                ans[i] = '1';
                break;
            }
        }
        for(int i=31; i>=0; i--){
            if(s[i] == '0'){
                ans[i] = '1';
                break;
            }
        }
        cout << bitset<32>(ans).to_ulong() << endl;
    }
    else{
        for(int i=31; i>=0; i--){
            if(s[i] == '1'){
                ans[i] = '1';
                break;
            }
        }
        cout << bitset<32>(ans).to_ulong() << endl;
        // cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}