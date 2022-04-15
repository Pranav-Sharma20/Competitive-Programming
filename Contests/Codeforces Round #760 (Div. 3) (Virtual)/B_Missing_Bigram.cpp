#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve() {
    int n;
    cin >> n;

    vector<string> a(n-2);

    for(int i = 0; i< n-1; i++){
        cin >> a[i];
    }

    int ind = -1;
    for(int i = 0; i< n-2; i++){
        if(a[i][1] != a[i+1][0]){
            ind = i;
            break;
        }
    }
    if(ind == -1){
        
    }
    else{

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