#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> mat(5);
    int row, col;
    for (int i = 0; i < 25; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            row = i / 5;
            col = i % 5;
        }
    }

    cout << abs(2 - row) + abs(2 - col) << endl;
    // cout << row << " " << col;
    return 0;
}