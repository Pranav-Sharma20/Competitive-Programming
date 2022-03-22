#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string num = to_string(n);
    string newest;

    if ((num[0] - '0') != 9 && (num[0] - '0') > 4)
    {
        newest += to_string(9 - (num[0] - '0'));
    }
    else
    {
        newest += num[0];
    }
    for (int i = 1; i < num.size(); i++)
    {

        if ((num[i] - '0') > 4)
        {
            newest += to_string(9 - (num[0] - '0'));
        }
    }

    cout << newest << endl;
    return 0;
}