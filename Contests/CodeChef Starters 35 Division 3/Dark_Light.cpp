#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)


void solve() {
    int n, k;
    cin >> n >> k;

    if(k == 1 && n==0){
        cout << "On" << endl;
        return;
    }

    if((k == 1 && n!=0)){
        if(n%4 != 0){
            cout << "Ambiguous" << endl;
        } else{
            cout << "On" << endl;
        }
        return;
    }

    if(n%4 == 0){
        cout << "Off" << endl;
    }
    else{
        cout << "On" << endl;
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