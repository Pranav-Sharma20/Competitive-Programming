#include <bits/stdc++.h>
using namespace std;
// **********************************************
// *************** PRANAV SHARMA ************8
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int o = 0,e=0;

    for (auto &it : a)
    {
        cin >> it;
        if (it % 2 == 1)
            o++;
        else
            e++;
    }

    if (o == 0 || e == 0)
    {
        cout << 0 << endl;
        return;
    }

    
    if(o%2 == 0){
        o = o/2;

        if(e < o){
            cout << e << endl;
            return;
        }
        else{
            cout << o << endl;
            return;
        }
    }
    else{
        cout << e << endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}