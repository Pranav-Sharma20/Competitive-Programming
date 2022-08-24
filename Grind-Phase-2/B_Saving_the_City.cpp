//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    int a, p;
    cin >> a >> p;

    string s;
    cin >> s;

    int n = s.size();
    int first =-1, last = -1;

    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            first = i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--){
        if(s[i] == '1'){
            last = i;
            break;
        }
    }

    if(first == last && first == -1){
        cout << "0\n";
        return;
    }

    int ans = a;

    for(int i=first; i<=last; i++){
        int c = 0;
        while(s[i] == '0'){
            c++;
            i++;
        }
        ans += min(a,p*c);
    }

    cout << ans << endl;
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