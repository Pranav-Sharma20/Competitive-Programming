//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    int sn,xn,k;
    cin >> sn >> xn >> k;
    unordered_map<char, int> umap;

    string s, x, a;
    cin >> s >> x;
    
    for(auto i : s){
        umap[i]=1;
    }
    for(auto i : x){
        umap[i]=2;
    }

    sort(s.begin(),s.end());
    sort(x.begin(),x.end());
    int i= 0, j = 0, cnt1 = 0, cnt2 = 0;

    while(i!= sn && j != xn){
        if(s[i] < x[j] && cnt1 < k){
            a+=s[i];
            i++;
            cnt1++;
            cnt2 = 0;
        }else if(cnt2 < k){
            a+=x[j];
            j++;
            cnt2++;
            cnt1 = 0;
        }else{
            a+=s[i];
            i++;
            cnt1++;
            cnt2 = 0;
        }
    }
    cout << a << endl;
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