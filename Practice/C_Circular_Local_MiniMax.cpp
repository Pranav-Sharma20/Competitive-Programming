//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)


// dfs function 
long long depth_first_search(long long index, long long fir_kya_hi_kro,map<long long,vector<long long>> &shit,vector<long long> &listings,vector<long long> &inter,vector<long long> &final){
    long long ginti = listings[index];
    long long sum=0;
    for(auto& i: shit[index]){
        if(i!=fir_kya_hi_kro){
            long long curr = depth_first_search(i,index,shit,listings,inter,final);
            sum+=curr;
            ginti = __gcd(ginti,curr);
        }
    }
    inter[index]=ginti;
    final[index]=sum;
    return ginti;
}

// searcher 
void searcher(long long index,long long fir_kya_hi_kro,long long su,map<long long,vector<long long>> &shit,vector<long long> &listings,vector<long long> &inter,vector<long long> &final,long long &ginti_fin){
    ginti_fin = max(ginti_fin,su);
    for(auto& i: shit[index]){
        if(i!=fir_kya_hi_kro)searcher(i,index,su-inter[i]+final[i],shit,listings,inter,final,ginti_fin);
    }
}

// solving 
void solve(){
    long long n;
    cin>>n;
    vector<long long> listings(n);
    vector<long long> inter(n);
    vector<long long> final(n);
    long long ginti_fin=0;
    map<long long,vector<long long>> shit;
    for (long long i = 0; i<n; ++i) {
        cin>>listings[i];
    }
    for(long long i=0;i<n-1;i++){
        long long x,y;
        cin>>x>>y;x--;y--;
        shit[x].push_back(y);
        shit[y].push_back(x);
    }
    long long ok = depth_first_search(0,-1,shit,listings,inter,final);
    searcher(0,-1,final[0],shit,listings,inter,final,ginti_fin);
    cout<<ginti_fin<<endl;
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