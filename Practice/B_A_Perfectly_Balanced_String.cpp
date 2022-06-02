//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    string s;
    cin >> s;;

    int n = s.size();

    for(int i =0; i< n-2; i++){
        string str;
        for(int j =i; j<i+3; j++){
            str+= s[j];
        }
        // cout << str << endl;
        if((str[0] == str[1] && str[1] != str[2]) || (str[1] == str[2] && str[1] != str[0]) ||(str[0] == str[2] && str[1] != str[0]) ){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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