//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    int n;
    cin >> n;
    vector<float> v(n);
    int sum = 0;

    for(auto &i:v){
        cin >> i;
        sum += i;
    }

    for(auto i : v){
        float m = (sum- i)/(n-1);
        if(m == i){
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
    return;
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