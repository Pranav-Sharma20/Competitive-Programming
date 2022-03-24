#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> polygons;

void solve()
{
    int n, ans = 0;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        ans += polygons[s];
    }
    cout << ans << "\n";
}

int main()
{

    polygons["Tetrahedron"] = 4;
    polygons["Cube"] = 6;
    polygons["Octahedron"] = 8;
    polygons["Dodecahedron"] = 12;
    polygons["Icosahedron"] = 20;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}