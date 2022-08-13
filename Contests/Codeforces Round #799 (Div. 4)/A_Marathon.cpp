//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    int a, b, c,d;
    int cnt = 0;
    cin >> a >> b >> c >> d;

    if(a < b){
        cnt++;
    }
    if(a < c){
        cnt++;
    }
    if(a<d){
        cnt++;
    }
    cout << cnt << endl;
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