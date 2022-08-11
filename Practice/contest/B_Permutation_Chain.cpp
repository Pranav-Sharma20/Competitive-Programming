//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)

void print(vector<int> ans){
    for(auto i: ans){
        cout << i << " ";
    } cout << endl;
}


void solve() {
    int n;
    cin >> n;

    vector<int> ans(n);
    int cur = 1;
    for(auto &i : ans){
        i = cur;
        cur++;
    }

    int rig = n;
    cout << n << endl;
    for(int i=0; i<n-1; i++){
        print(ans);
        swap(ans[i],ans[i+1]);
    }
    print(ans);

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