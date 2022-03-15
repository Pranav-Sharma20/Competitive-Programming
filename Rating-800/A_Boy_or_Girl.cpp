#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    set<char> help;

    for(auto c: s){
        help.insert(c);
    }

    int n = help.size();

    if(n%2) cout << "IGNORE HIM!" ;
    else cout << "CHAT WITH HER!";

    return 0;
}