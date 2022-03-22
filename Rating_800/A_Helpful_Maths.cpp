#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int n = s.size();
    for(int i=(n-1)/2; i<n; i++){

        if(i==n-1){
            cout << s[i];
        }
        else{
            cout << s[i] << '+' ;
        }
    }
    return 0;
}