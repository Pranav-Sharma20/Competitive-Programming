//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    int n;
    cin >> n;

    if(n==1){
        cout << 2 << endl;
        return;
    }
    if(n== 2){
        cout << 1 << endl;
        return;
    }

    if(n%3 == 0){
        cout << n/3 << endl;
    } else {
        cout << (n/3)+1 << endl;
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