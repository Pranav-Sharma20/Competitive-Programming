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
    vector<int> arr(n), ar;
    map<int, int> umap, mpp;

    for(auto &i: arr){
        cin >> i;
        ar.push_back(i);
    }

    sort(ar.begin(), ar.end());

    if(ar == arr){
        cout << "0\n";
        return;
    }
    int k = n-1;

    for(int i=n-1; i>=0; i--){
        if(i != n-1){
            if(arr[i] > arr[i+1])
            {
                k = i;
                break;
            }
        }
    }
    // cout <<"k : " <<  k << endl;
    for(int i=0; i<=k; i++){
        umap[arr[i]]++;
    }
    
    // for(auto i: umap)
    //     cout << i.first << ' ' << i.second << endl;
    // cout << endl;

    // for(int i=k; i<n; i++){
    //     if(umap.count(arr[i])){
    //         cout << umap.size() + mpp.size() << endl;
    //         return;
    //     } else {
    //         if(i != n-1){
    //             mpp[arr[i]]++;
    //         } else{
    //             cout << umap.size() << endl;
    //             return;
    //         }
    //     }
    // }
    int r = k;

    for(int i=n-1; i>=k; i--){
        if(umap.count(arr[i])){
            r = i;
            break;
        }
    }
    // cout << "r : " << r << endl;
    // cout << endl;

    for(int i=k+1; i<r; i++){
        umap[arr[i]]++;
    }

    cout << umap.size() << endl;
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
