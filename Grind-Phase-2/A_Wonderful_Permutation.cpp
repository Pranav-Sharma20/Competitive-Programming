//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n,0);
    vector<int> arr1(n,0);
    vector<int> ar;

    for(int i=0; i< n; i++){
        int a;
        cin >> a;

        if(i<k){
            arr[a-1] = 1;
        }

        ar.push_back(a);
    }

    int ans =0;
    
    for(int i=0; i< n; i++){
        cout << arr[i] << " ";
    } cout << endl;

    for(int i=0; i<k; i++){
        if(arr[i] == 0){
            ans++;
        }
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