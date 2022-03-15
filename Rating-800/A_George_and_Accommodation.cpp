#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int rooms;
    cin >> rooms;
    int count = 0;

    while(rooms--)
    {
        int living, total;
        cin >> living >> total;
        int vacant = total - living;

        if(2 <= vacant) 
        {
            count += 1;
        }
    }
    cout << count;
    return 0;
}