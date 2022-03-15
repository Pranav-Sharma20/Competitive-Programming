#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int q = n/5;
    int r = n%5;

    if(r == 0){
        cout << q;
    } else {
        cout << q + 1;
    }

    return 0;
}