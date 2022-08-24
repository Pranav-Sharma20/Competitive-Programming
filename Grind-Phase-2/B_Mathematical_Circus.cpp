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

n = 4 
k = 1

print pairs between 1 - n
condition - ((a+k)*b) should be divisible by 4



*/




void solve() {
    int n, k;
    cin >> n >> k;

    if(k%4 == 0){
       cout << "NO\n"; 
       return;
    }
    cout << "YES\n";
    if(k&1){
        for(int i=1; i<n; i+=2){
            cout << i << " " << i+1 << endl;
        }
    } else{
        bool flag=true;
        for(int i=1; i<n; i+=2){
            if(flag){
                cout << i+1 << " " << i << endl;
                flag = false;
            } else {
                cout << i << " " << i+1 << endl;
                flag = true;
            }
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