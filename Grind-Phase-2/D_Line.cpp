//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)
//for(auto i: a)
    //cout << i.first << ' ' << i.second << endl;
//cout << endl;

void Him(){
    ll n;
    cin>>n;
    string temp;
    cin>>temp;
    vector<ll>res;
    ll sum=0;
    for(int i=0;i<n;i++){
        if(temp[i]=='L'){
            res.push_back(i);
        }else{
            res.push_back(n-i-1);
        }
        sum+=res[i];
    }
    sort(res.begin(),res.end());
    vector<ll>ans;
    for(int i=0;i<n;i++){
        ll x= sum-res[i]+ (n-res[i]-1);
        x= max(x,sum);
        sum=x;
        ans.push_back(x);
    }
        for(auto i: ans){
            cout << i << " ";
        }cout << endl;
    return;
}


void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> ar;
    // ll lim = 0;
    // for(int i =n/2+1; i<n; i++){
    //     a.push_back(i);
    //     lim+=i;
    // }
    // reverse(a.begin(),a.end());
    // if(n&1){
    //     a.push_back(n/2);
    //     lim+=(n/2);
    // }
    // for(int i =n/2+1; i<n; i++){
    //     a.push_back(i);
    //     lim+=i;
    // }
    ll sum =0;
    forn(i,n){
        int a, b;
        if(s[i]=='L')
        a=i, b=n-i-1;
        else
        a=n-1-i, b=i;
        cout << "a : "<< a << " " << "b : " << b << endl;
        sum+=a;
        ar.push_back(max(0, b-a));
    }
    cout << "SUM : " << sum << endl;

    for(auto i:ar){
        cout << i << " ";
    }cout << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--){
         solve();
    }
    return 0;
}