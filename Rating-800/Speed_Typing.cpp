#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, ans, i1, j, l1, l2, i2, t1, c;
    string a, b;
    
    cin>>t;
    
    for(t1=1; t1<=t; t1++){
        cin>>a;
        cin>>b;
        c=0;ans=0;
        l1=a.size();
        l2=b.size();
        
        for(i1=0, i2=0; i1<l1 && i2<l2; ){
            if(a[i1]==b[i2]){
                c++;
                i1++;
                i2++;
            }else{
                i2++;
                ans++;
            }
        }
        
        cout<<"Case #"<<t1<<": ";
        
        if(c==l1){
            cout<<ans+(l2-i2)<<"\n";
        }else{
            cout<<"IMPOSSIBLE\n";
        }
    }
}