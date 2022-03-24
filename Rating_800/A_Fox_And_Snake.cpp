#include <bits/stdc++.h>
using namespace std;

void solve()
{
    bool flag = true;
    int r, c;
    cin >> r >> c;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i % 2)
            {
                cout << '#';
            }
            else
            {
                if (flag)
                {
                    if (j == c)
                    {
                        cout << "#";
                        flag = false;
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                else if (flag == false)
                {
                    if (j == c)
                    {
                        flag = true;
                    }
                    if (j == 1)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while(t--){
    //      solve();
    // }
    solve();
    return 0;
}