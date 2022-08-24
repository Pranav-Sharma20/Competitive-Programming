//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)
//for(auto i: a)
    //cout << i.first << ' ' << i.second << endl;
//cout << endl;




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        ll n, ans = 0; 
        cin >> n;

        if(n%4 != 0){
            ans = (n/4)+1;
        }
        else {
            ans = n/4;
        }
        cout << "Case #" << i << ": " << ans << endl;
    }
    return 0;
}