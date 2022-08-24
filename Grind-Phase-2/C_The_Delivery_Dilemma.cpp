//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)
 
 
 
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto &i: a){
        cin >> i;
    }
    for(auto &i: b){
        cin >> i;
    }
 
    priority_queue<pair<int,int>> pq;
    int self=0, del=0;
 
    for(int i=0; i<n; i++){
        pair<int,int> p = {a[i],b[i]};
        pq.push(p);
    }
 
    while(!pq.empty()){
        auto p = pq.top();
        pq.pop();
        // cout << p.first << " "<< p.second<<endl;
        if(self + p.second < p.first){
            self += p.second;
        } else{
            del = max(del, p.first);
        }
    }
    cout << max(self, del) << endl;
    // cout << "-----"<< endl;
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