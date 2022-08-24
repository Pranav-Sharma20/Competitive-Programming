#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &a ,int x)
{
    int n = a.size();
    
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
    return r+1;
}

int main(){
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    
    for(auto &i: a){
        cin >> i;
    }
    
    for(int i=0; i<k; i++){
        int x;
        cin >> x;
        
        cout << solve(a,x) << endl;
    }
}