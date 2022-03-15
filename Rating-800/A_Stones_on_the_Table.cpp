#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n >> s;

    int cnt = 0;

    for(int i = 0; i< n-1; i++)
    {
        if(s[i] == s[i+1]) cnt++;
    }
    
    cout << cnt;
    return 0;
}