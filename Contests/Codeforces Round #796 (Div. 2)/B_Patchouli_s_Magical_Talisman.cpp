//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(auto &i: v){
        cin >> i;
    }

    int cnt4 = 0,cnt2 = 0, op = 0;
    

    for(auto &i : v){
        if(i%2 == 0 && i%4 != 0){
            cnt2++;
        }
        else if(i%4 == 0){
            cnt4++;
        }
    }

    if(cnt2 >= cnt4){
        op += cnt4 * 2;
        op += (cnt2 - cnt4);
    } else {
        ll sum = 0;
        sort(v.begin(), v.end());
        op += cnt2 *2;
        int m = cnt4 - cnt2;
        int i = 0;
        while(m > 0){
            if(v[i]%4 != 0){
                sum += v[i];
                m--;
            }
            i++;
        }
        op += (sum/4);
    }

    cout << op << endl;
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