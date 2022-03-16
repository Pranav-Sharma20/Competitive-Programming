#include <bits/stdc++.h>
using namespace std;

bool prime(int number)
{
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

string solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = n + 1; i <= m; i++)
    {
        if (prime(i))
        {
            if (i == m)
                return "YES";
            else
                return "NO";
        }
    }
    return "NO";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve();
    return 0;
}