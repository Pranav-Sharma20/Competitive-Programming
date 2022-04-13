#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve() {
    ll n;
    cin >> n;

    string s;
    cin >> s;

    if(n%2 == 1){
        cout << "NO" << endl;
        return;
    }

    ll cnt= 0, cnt1 = 0;
    
    for(auto c : s){
        if(c == '1'){
            cnt++;
        }
        else {
            cnt--;
        }
    }

    if(cnt == 0){
        cout << "YES" << endl;
        cout << 1 << " " << n << endl;
        return;
    }

    for(int i=0; i< n; i++){
        if(s[i] == '1'){
            cnt1++;
        }
        else {
            cnt1--;
        }
        if(cnt1 == cnt/2){
            cout << "YES" << endl;
            cout << 1 << " " << i+1 << endl;
            break;
        }
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