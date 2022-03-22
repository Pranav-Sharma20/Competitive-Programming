#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n, w;

    cin >> k >> n >> w;

    int total = 0;
    for (int i = 1; i <= w; i++)
    {
        total += i * k;
    }
    total <= n ? cout << 0 : cout << total - n;
    return 0;
}