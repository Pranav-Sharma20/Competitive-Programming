#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0, need = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
        arr[i] = temp;
    }

    sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (need <= sum / 2)
        {
            ans++;
            need += arr[i];
        }
        else
        {
            break;
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}