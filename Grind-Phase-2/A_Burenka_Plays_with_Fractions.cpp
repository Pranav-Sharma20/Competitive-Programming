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
    ll a , b , c ,d;
    cin >> a >> b >> c >> d;

    if(a== 0 && c == 0){
        cout << "0\n";
        return;
    }else if(a == 0 || c == 0){
        cout << "1\n";
        return;
    }
    long long int ac = a*d , ab = c*b;
    if(a*d == c*b){
        cout <<"0\n" ;
    }
    else if(ac%ab == 0 || ab%ac == 0){
        cout << "1\n";
    } else{
        cout << "2\n";
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