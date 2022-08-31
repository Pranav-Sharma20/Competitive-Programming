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
    int n;
    cin >> n;

    set<string> a,b,c;
    set<string> st;
    vector<string> av, bv, cv;
    forn(i,n){
        string str;
        cin >> str;
        a.insert(str);
        av.push_back(str);
    }
    forn(i,n){
        string str;
        cin >> str;
        b.insert(str);
        bv.push_back(str);
    }
    forn(i,n){
        string str;
        cin >> str;
        c.insert(str);
        cv.push_back(str);
    }

    int as = 0, bs =0, cs=0;

    for(auto i:av){
        if(st.find(i) != st.end()){
            continue;
        }else{
            st.insert(i);
        }

        if(b.find(i) == b.end() && c.find(i) == c.end()){
            as+=3;
            continue;
        }

        if(c.find(i) != c.end() && b.find(i) != b.end()){
            continue;
        }

        if(b.find(i)!=b.end()){
            bs+=1;
            as+=1;
            continue;
        }

        if(c.find(i)!=c.end()){
            cs+=1;
            as+=1;
            continue;
        }
    }

    for(auto i:bv){
        if(st.find(i) != st.end()){
            continue;
        }else{
            st.insert(i);
        }

        if(a.find(i) == a.end() && c.find(i) == c.end()){
            bs+=3;
            continue;
        }

        if(c.find(i) != c.end() && a.find(i) != a.end()){
            continue;
        }

        if(c.find(i)!=c.end()){
            bs+=1;
            cs+=1;
            continue;
        }

        if(a.find(i)!=a.end()){
            as+=1;
            bs+=1;
            continue;
        }
    }

    for(auto i:cv){
        if(st.find(i) != st.end()){
            continue;
        }else{
            st.insert(i);
        }

        if(a.find(i) == a.end() && b.find(i) == b.end()){
            cs+=3;
            continue;
        }

        if(a.find(i) != a.end() && b.find(i) != b.end()){
            continue;
        }

        if(b.find(i)!=b.end()){
            bs+=1;
            cs+=1;
            continue;
        }

        if(a.find(i)!=a.end()){
            as+=1;
            cs+=1;
            continue;
        }
    }


    cout << as << " " << bs << " " << cs << endl;
    
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