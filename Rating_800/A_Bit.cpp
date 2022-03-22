#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int x = 0;
    while(n--){
        string statement;
        cin >> statement;

        if(statement[1]=='+')
            x++;
        else
            x--;
    }
    cout << x << endl;

    return 0;
}