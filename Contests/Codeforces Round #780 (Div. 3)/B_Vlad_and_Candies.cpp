#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a[i] = temp;
    }

    if (n == 1 && a[0] > 1)
    {
        cout << "NO" << endl;
    }
    else if(n==1 && a[0] <= 1){
        cout << "YES" << endl;
    }
    else
    {
        sort(a.begin(), a.end());

        if(a[n-1] - a[n-2] >1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
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