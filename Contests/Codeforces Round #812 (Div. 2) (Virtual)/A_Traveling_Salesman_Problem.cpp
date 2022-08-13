//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)



void solve() {
    int pox = 0,nex = 0,ney = 0,poy = 0;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        
        if(x==0){
            if(y<0){
                nex = max(nex,abs(y));
            } else if(y > 0){
                pox = max(pox,y);
            }
        } else if(y==0) {
            if(x<0){
                ney = max(ney,abs(x));
            } else if(x > 0){
                poy = max(poy,x);
            }
        }
    }
    // cout << pox << ' ' << nex << " " << poy << ' ' << ney << endl;
    int ans = 0;
    ans += (pox*2);
    ans += (nex*2);
    ans += (poy*2);
    ans += (ney*2);
    cout << ans << endl;
    // cout << "--------------" << endl;
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