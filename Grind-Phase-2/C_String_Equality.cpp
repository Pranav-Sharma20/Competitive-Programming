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
    int i, n, k; string a, b;
    cin >> n >> k >> a >> b;
    array<int, 27> given{}, want{};
    for(auto& c: a)
        given[c-'a']++;
    for(auto& c: b)
        want[c-'a']++;

    // for(auto i: given)
    //     cout << i<< ' ';
    // cout << endl;

    // for(auto i: want)
    //     cout << i<< " ";
    // cout << endl;

    bool ans = false;
    for(i = 0; i < 26; i++) {
        if(given[i] < want[i] || (given[i] -= want[i]) % k)
            ans = true;
        given[i+1] += given[i];
    }
    cout << (ans? "No" : "Yes") << endl;
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