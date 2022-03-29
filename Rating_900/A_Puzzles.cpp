#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(t);

    for (int i = 0; i < t; i++)
    {
        int temp;
        cin >> temp;
        a[i] = temp;
    }
    sort(a.begin(), a.end());

    cout << a[n - 1] - a[0] << "\n";

    // for(auto i : a){
    //     cout << i << " ";
    // }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    solve();
    return 0;
}