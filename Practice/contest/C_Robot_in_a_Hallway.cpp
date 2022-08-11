/*
    “All you need was that one little match, to start that whole fire.”
*/ 

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>

#define ll long long
using namespace std;

#define check(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename val1>
    void __f(const char* name, val1&& value) { 
    cout << name << " = " << value << endl; 
  }
template <typename val1, typename... values>
void __f( const char* names, val1&& value, values&&... multiplevalue) 
{
  const char* comma = strchr( names + 1, ','); cout.write(names, comma - names) << " = " << value << " "; __f(comma + 1, multiplevalue...); 
}

const int  INF  =  0x7f7f7f7f;

int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
         ll n;
         cin >> n;
         ll arr[2][n];
         for(int i = 0;i<2;i++){
            for(int j = 0;j<n;j++){
                cin >> arr[i][j];
            }
         }    
         ll d[2][n] , u[2][n];
         memset(d,0,sizeof d);
         memset(u,0,sizeof u);
         for(int i = 0;i<2;i++){
            int st = 0 , diff = 1;
            if(i == 1) {
                u[i][n-1] = max(u[0][n - 1] + 1 , arr[i][n - 1] + 1);
                st = n - 2; 
                diff = -1;
            }
            for(int j = st;j<n && j>=0;j+=diff) {
                if(i == 0 && j == 0){
                    u[i][j] = arr[i][j];
                } else {
                    u[i][j] = max(arr[i][j] + 1, u[i][j - diff] + 1);
                }
            }
         }
         for(int i = 1;i>=0;i--) {
            int st = 0 , diff = 1;
            if(i == 0) {
                st = n - 2;
                diff = -1;
                d[i][n-1] = max(d[1][n - 1] + 1 , arr[i][n-1] + 1); 
            }
            d[0][0] = arr[0][0];
            for(int j = st;j<n && j >= 0;j+=diff){
                if(i == 0 && j == 0)
                    break;
                if(i == 1 && j == 0) {
                    d[i][j] = max(d[0][0] + 1 , arr[i][j] + 1);
                } else {
                    d[i][j] = max(d[i][j - diff] + 1 , arr[i][j] + 1);
                }
            }
         }
         ll ans = min(d[0][1] , u[1][0]);
         // 0 , 0 -> 1 , 0 -> 1 , 1 -> 0 , 1 -> 
         // + 1 (i) , + 1 (j) , -1 (i) , +1 (j)
         ll dx[4] = {1 , 0 , -1 , 0};
         ll dy[4] = {0 , 1 , 0 , 1};
         ll cx = 0 , cy = 0;
         ll timer = arr[0][0];
         int j = 0;
         ll vis[2][n];
         memset(vis,0,sizeof vis);
         vis[0][0] = 1;
         ll last = arr[0][0];
         ll left = 2 * n - 1;
         while(1) {
            cx += dx[j%4] , cy += dy[j%4];
            j++;
            if(cy == n)
                break;
            left--;
            timer = max(arr[cx][cy] + 1 , timer + 1);
            if(vis[1^cx][cy] == 0) {
                if(cx == 0) {
                    ll total = max(u[1^cx][cy] , timer + left);
                    ans = min(ans , total);
                } else {
                    ll total = max(d[1^cx][cy] , timer + left);
                    ans = min(ans , total);
                }
            } else {
                if(cy + 1 < n) {
                    if(cx == 0) {
                        ll total = max(timer + left , u[1][cy + 1]);
                        ans = min(ans , total);
                    } else {
                        ll total = max(timer + left , d[0][cy + 1]);
                        ans = min(ans ,total);
                    }
                }
            }

         }
         cout << min(ans , timer) << "\n" ;

    }
    return 0;
}  