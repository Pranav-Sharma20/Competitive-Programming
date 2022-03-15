#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while(true)
    {
        n+=1;
        int a = n/1000; // first digit
        int b = n/100 % 10;  //second digit
        int c = n/10 % 10;  // third digit
        int d = n%10; // last digit


        // check if they are unique
        if(a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << n << endl;
    return 0;
}