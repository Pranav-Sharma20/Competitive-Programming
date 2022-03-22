#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    string num = to_string(n);
    string newest;

    if (num[0] != '9' && (num[0] - '0') > 4)
    {
        int temp = (num[0] - '0');
        newest += to_string(9 - temp);
    }
    else
    {
        newest += num[0];
    }
    for (int i = 1; i < num.size(); i++)
    {
        int check = (num[i] - '0');
        if ((num[i] - '0') > 4)
        {
            newest += to_string(9 - check);
        }
        else
        {
            newest += num[i];
        }
    }

    cout << newest << endl;
    return 0;
}