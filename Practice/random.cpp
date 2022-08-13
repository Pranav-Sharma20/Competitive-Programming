//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)

bool palindrome(int n, string s){
    int i = 0, j = n-1;
    bool flag = true;
    while(i<j){
        if(s[i] != s[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    return flag;
}


void solve() {
    int n;
    cin >> n; 
    vector<string> ar(n);

    for(auto &i: ar){
        cin >> i;
    }

    int ans = 0;

    for(auto s : ar){
        int x = s.size();
        // first condition 
        bool done = true;
        bool flag = palindrome(x,s);
        if(flag && s.size() >= 2 && done){
            ans++;
            done = false;
        }

        string str1, str2 ;

        // second & third condition  
        if(x&1){
            // length is odd
            str1 = s.substr(0,x/2);
            str2 = s.substr((x/2)+1, x/2);
        } else{
            // even length 
            str1 = s.substr(0,x/2);
            str2 = s.substr((x/2), x/2);
        }

        // cout << str1 << " " << str2 << endl;

        bool flag1 = palindrome(x/2, str1);
        if(flag1 && str1.size() >= 2 && done){
            ans++;
            done = false;
        }

        bool flag2 = palindrome(x/2, str2);
        if(flag2 && str2.size() >= 2 && done){
            ans++;
            done = false;
        }
    }
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