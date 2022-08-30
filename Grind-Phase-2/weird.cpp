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
  int n;
  cin >> n;

  while (n != 1) {
    cout << n << ' ';
    if (n & 1) {
      n = (n * 3) + 1;
    } else {
      n /= 2;
    }
  }cout << n << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--){
         solve();
    }
    return 0;
}