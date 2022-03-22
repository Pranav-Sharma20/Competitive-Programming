#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h, ans;
    cin >> n >> h;
    while (n--)
    {
        int num;
        cin >> num;
        if (num > h)
            ans += 2;
        else
            ans += 1;
    }
    cout << ans;

    return 0;
}