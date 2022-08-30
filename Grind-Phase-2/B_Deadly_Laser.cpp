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
    int n,m,x,y,d;
    cin >> n >> m>> x >> y >> d;
    bool first = false, sec = false;
    if(abs(x-n)+abs(y-m) <= d){
        cout << "-1\n";
        return;
    }
    for(int i=1; i<=m; i++){
        if(abs(x-1)+abs(y-i) <= d){
            first = true;
        }   
        if(abs(x-n)+abs(y-i) <=d){
            sec = true;
        }  
        if(first && sec){
            cout << "-1\n";
            return;
        }  
    }

    bool third = false;
    bool fou = false;

    for(int i=1; i<=n; i++){
        if(abs(x-i)+abs(y-1) <= d){
            third = true;
        } 
        if(abs(x-i)+abs(y-m) <=d) {
            fou = true;
        }   

        if(third && fou){
            cout << "-1\n";
            return;
        } 
    }

    if(first && third){
        cout << "-1\n";
        return;
    }

    if(sec && fou){
        cout << "-1\n";
        return;
    }

    cout << n+m-2 << endl;
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