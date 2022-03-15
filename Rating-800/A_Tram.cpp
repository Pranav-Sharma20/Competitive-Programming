#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int maxi = INT_MIN;
    int curr = 0;
    while(n--){
       int a, b;

       cin >> a >> b;
       curr = curr+(b-a);
       maxi = max(maxi, curr);
    }
    cout << maxi;
    return 0;
}