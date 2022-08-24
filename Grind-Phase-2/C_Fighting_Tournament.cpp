//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)
//for(auto i: a)
    //cout << i.first << ' ' << i.second << endl;
//cout << endl;

/*
    1 3 4 2
    3 4 2 1
    4 2 1 3
    4 1 3 2
    round = 3 (n-1)

    1 2 3 5 4 


    1 2 3 5 4

*/


void solve() {
    int n, c, mxind = -1, mxele = -1;
    cin >> n >> c;
    // cout << "n : " << n << " " << "c : " << c << endl;
    unordered_map<int,int> umap;

    if(n==1){
        for(int i=0; i<c; i++){
            cout << c << endl;
        }
        return;
    }

    int ind = 1;
    deque<int> q;
    vector<int> arr(n+1,0);
    for(int i=0; i< n; i++){
        int e;
        cin >> e;
        umap[e] = ind;
        q.push_back(e);

        if(mxele < e){
            mxind = ind;
            mxele = e;
        }

        ind++;
    } 

    // for(auto i: umap)
    //     cout << i.first << ' ' << i.second << endl;
    // cout << endl;

    // n-1 rounds 
    int i = 1;
    while(i<=n){
        
        int a = 0, b = 0;

        a = q.front();
        q.pop_front();
        b = q.front();
        q.pop_front();
        
        if(a > b){
            arr[i] = umap[a];
            q.push_back(b);
            q.push_front(a);
        }else {
            arr[i] = umap[b];
            q.push_back(a);
            q.push_front(b);
        }
        i++;
    }
    // cout << mxele << " : " << mxind << endl;
    // for(auto i: arr){
    //     cout << i << " ";
    // }cout << endl;

    // query answers
    for(int i=0; i<c; i++){
        int a , b ;
        cin >> a >> b;
        int ans = 0;
        if(b<=n){
            for(int i=1; i<b+1; i++){
                if(arr[i] == a){
                    ans++;
                }
            }
            cout << ans <<endl;
        }else {
            for(int i=1; i<n; i++){
                if(arr[i] == a){
                    ans++;
                }
            }

            if(a == mxind){
                cout << ans + (b - (n-1)) << endl;
            } else {
                cout << ans << endl;
            }
            // cout << ans << endl;

        }
        
    }

    

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