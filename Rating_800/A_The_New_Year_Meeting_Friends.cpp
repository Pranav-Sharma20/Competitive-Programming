#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, y, z;

    vector<int> vec;
    for (int i = 0; i < 3; i++)
    {
        int n;
        cin >> n;
        vec.push_back(n);
    }

    sort(vec.begin(), vec.end());
    int mid = (vec[2] + vec[0]) / 2;

    cout << abs(mid - vec[0]) + abs(mid - vec[2]) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}