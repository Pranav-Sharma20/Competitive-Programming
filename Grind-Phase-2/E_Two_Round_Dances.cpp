//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    int n;
    cin >> n;
    vector<ll> arr(21);
    arr[0] = 1;

    for(int i=1;i<21;i++){
        arr[i] = arr[i-1]*i;
    }

    long long ans = arr[n] / arr[n / 2] / arr[n / 2];
	ans = ans * arr[n / 2 - 1];
	ans = ans * arr[n / 2 - 1];
	ans /= 2;
	
	cout << ans << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    solve();
    return 0;
}