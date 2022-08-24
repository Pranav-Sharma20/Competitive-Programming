//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)
//for(auto i: a)
    //cout << i.first << ' ' << i.second << endl;
//cout << endl;

// 1  2  3  4  5  6
// 1  1  3 10 10 44

void solve() {
    int n, k;
    cin >> n;

    vector<int> a(n);

    for(auto &i: a){
        cin >> i;
    }
    cin >> k;
   
    sort(a.begin(), a.end());


    
    while(k--){ 
        int x, y;
        cin >> x >> y;
        // cout << x << " " << y << endl;
    

        // Find Closest to the right
        int l = -1; // a[l] < x
        int r = n; // a[r] >= x
        int m =0;
        
        while(r > l+1){
            m = l + (r-l)/2;
            
            if(a[m] < x){
                l = m;
            } else {
                r = m;
            }
        }
        int left = r + 1;


        // Find closest to the left
        l=-1;  // a[l] <= x
        r = n; // a[r] > x
        int mid = 0;

        while(l+1<r){

            mid = l + (r-l)/2;
            if(a[mid] <= y){
                l = mid;
            } else if(a[mid] > y){
                r = mid;
            }
        }
        int right = l + 1;

        cout << right - left + 1 << " ";

    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}