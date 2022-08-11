#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, h, m;
        cin >> n >> h >> m;
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            mp[a].push_back(b);
        }
        int ans1 = -1,ans;
        for (int i = 0; i < 25; i++)
        {
            int t = (h + i) % 24;
            if (mp[t].size())
            {
                sort(mp[t].begin(), mp[t].end());
                for (int j = 0; j < mp[t].size(); j++)
                {
                    if (i==0 and mp[t][j] >= m)
                    {
                        ans = mp[t][j] - m;
                        ans1 = i;
                        break;
                    }
                    else if(i>0){
                        int l = mp[t][j];
                        if(l<m){
                            ans = 60 - m + l;
                            ans1 = i-1;
                            if(ans>=60){
                                ans = ans%60;
                                ans1 = i;
                            }                           
                            break;
                        }
                        else{
                            ans = l - m;
                            ans1 = i;
                            break;
                        }
                    }
                }
            }
            if (ans1 != -1)
                break;
        }
        cout << ans1 << " " << ans << '\n';
    }
}