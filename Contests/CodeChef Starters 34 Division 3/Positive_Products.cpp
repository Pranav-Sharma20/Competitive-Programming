#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (auto &i : a)
    {
        cin >> i;
    }

    ll ans = 0, cntp = 0, cntn = 0;
   
    for (int i = 0; i < n ; i++)
    {
        if(a[i] < 0){
            cntn++;
        }
        else if(a[i] > 0){
            cntp++;
        }
    }

    // cout << cntp << " " << cntn  << endl;

    // while(cntn > 0){
    //     ans+= cntn;
    //     cntn--;
    // }
    // while(cntp > 0){
    //     ans+= cntp;
    //     cntp--;
    // }
    // if(cntn > 1){
    //     ans += (cntn*(cntn+1))/2;
    // }
    // if(cntp > 1){
    //     ans += (cntp*(cntp+1))/2;
    // }
    ans += (cntn*(cntn-1))/2;
    ans += (cntp*(cntp-1))/2;
    cout << ans << endl;
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