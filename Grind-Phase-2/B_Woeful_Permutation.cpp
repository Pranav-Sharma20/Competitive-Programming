//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 1; i <= n; i++) {
        arr.push_back(i);
    }

    if(n%2 == 0){
        int i = n-1, j = n-2;
        while(i>0){
            swap(arr[i],arr[j]);
            i-=2;
            j-=2;
        }
    }
    else{
        int i = n-1, j = n-2;
        while(i>0){
            swap(arr[i],arr[j]);
            i-=2;
            j-=2;
        }
    }
    for(auto i:arr){
        cout << i << " ";
    } cout << endl;

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