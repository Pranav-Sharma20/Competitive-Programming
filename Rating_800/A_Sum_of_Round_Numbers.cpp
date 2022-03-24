#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >>n;
    int total= 0, m = 1;
    int arr[6];

    for(int i =1; i<6; i++){
        arr[i] = n%10;
        n/=10;
        if(arr[i] != 0){
            total++;
        }
    }

    cout << total << "\n";

    for(int i = 1; i< 6; i++){
        if(arr[i] != 0){
            cout << arr[i]*m << " ";
        }
        m*=10;
    }
    cout << "\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
         solve();
    }
    return 0;
}