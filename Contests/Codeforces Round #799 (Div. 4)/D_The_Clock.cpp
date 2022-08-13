//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)

// fuction for converting time string to minutes
ll getTime(string &s) {
    return stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3));
}

void help(int & cnt, int min, string tim, string s){
    // cout << "#" << endl;
    if(tim[0] == tim[4] && tim[1] == tim[3]){
        cnt++;
    }

    ll time = getTime(tim);
    time += min;

    string hr = to_string((time/60)%24);
    if(hr.size() == 1){
        hr = '0' + hr;
    }
    string m = to_string(time%60);
    if(m.size() == 1){
        m = '0' + m;
    }

    // Next time string after given minutes
    tim = hr + ':' + m;

    // Base case
    if(tim == s) return;

    //rec call 
    help(cnt,min,tim,s);
    
}

void solve() {
    string s;
    cin >> s;

    int min;
    cin >> min;
    int ans = 0;

    string f = s;

    help(ans, min, f , s);
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

