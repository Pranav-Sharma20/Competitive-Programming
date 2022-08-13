//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    int n;
    cin >> n;
    vector<int> odd, even;

    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        if(a&1){
            odd.push_back(i);
        } else{
            even.push_back(i);
        }
    }
    odd.size() == 1? cout << odd[0] << endl : cout << even[0] << endl;
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