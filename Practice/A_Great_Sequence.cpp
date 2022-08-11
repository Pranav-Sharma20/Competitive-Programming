//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)

int helper(vector<int> arr, int mx, int curr, int ind, int n){
    if(ind == n){
        return 0;
    }

}

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int>even;
    vector<int>odd;
    int n = even.size();
    int m = odd.size();

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        if(temp&1){
            odd.push_back(temp);
        } else{
            even.push_back(temp);
        }
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    // cout << helper(even,0,0,0,n) << endl;
    // cout << helper(odd,0,0,0,m) << endl;

    
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