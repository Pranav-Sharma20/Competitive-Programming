//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> ar(n);
    for(auto &i: a){
        cin >> i;
    }

    if(n%2 == 1){
        cout << "NO\n";
        return;
    }

    sort(a.begin(), a.end());
    int ind = 0;

    for(int i=0; i<n/2; i++){
        // cout << a[i] << " " << a[(n/2)+i] << " ";
        ar[ind+i] = a[i];
        ar[ind+i+1] = a[(n/2)+i];
        ind++;
    }


    for(int i =1; i< n-1; i+=2){
        if(ar[i-1]>= ar[i] || ar[i+1]<= ar[i]){
            cout << "NO\n" ;
            return;
        }
    }

    cout << "YES\n";

    for(auto i : ar){
        cout << i << " ";
    }
    cout << endl;
    return;
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