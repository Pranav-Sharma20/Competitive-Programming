// This template is created by Pranav Sharma
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; --i)

void solve(){
    vector<int> half(48), year(48);
    vector<float> p(48),total(48);
    unordered_map<int, int> m;

    for(auto &i : half){
        cin >> i;
    }
    for(auto &i : year){
        cin >> i;
    }

    for(int i=0; i<48; i++){
        total[i] = half[i]+year[i];
        p[i] = (total[i]/10);
        m[i] = total[i];
    }

    for(auto i : total){
        cout << i << endl;
    }

    for(auto i : p){
        cout << i << endl;
    }

    sort(total.begin(), total.end(), greater<int>());

    cout << "First : " << m[total[0]] << endl;
    cout << "Second : " << m[total[1]] << endl;
    cout << "Third : " << m[total[2]]<< endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    solve();
    return 0;
}