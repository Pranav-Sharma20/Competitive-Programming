#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0)
    {

        long long sr = sqrt(x);

        // if product of square root
        // is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

void solve()
{
    int x, y;
    cin >> x >> y;

    long double a = (x * x + y * y);

    if (x == 0 && y == 0)
    {
        cout << 0 << endl;
        return;
    }
    else if (isPerfectSquare(a))
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        cout << 2 << endl;
        return;
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