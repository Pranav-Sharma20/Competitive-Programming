#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (auto &it : arr)
    {
        cin >> it;
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << abs(arr[i] - arr[i + 1]) << " ";
            cout << abs(arr[i] - arr[n - 1]) << endl;
            continue;
        }
        if (i == n - 1)
        {
            cout << abs(arr[i] - arr[i - 1]) << " ";
            cout << abs(arr[i] - arr[0]) << endl;
            continue;
        }
        int mn = INT_MAX, mx = INT_MIN;
        cout << min(abs(arr[i] - arr[i + 1]), abs(arr[i] - arr[i - 1])) << " ";
        cout << max(abs(arr[i] - arr[n - 1]), abs(arr[i] - arr[0])) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}