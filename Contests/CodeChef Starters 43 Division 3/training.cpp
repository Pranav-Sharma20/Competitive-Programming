//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)

    
vector<int> makeBeautiful(vector<int> arr) {
    // code here
    int n = arr.size();
    if(n == 1) return arr;
    vector<int> ans;
    stack<int> st;
    
    for(int i = 0; i < n; i++){
        if(!st.empty()){
            if( (st.top() ^ arr[i]) < 0 ){
                st.pop();
            }else{
                st.push(arr[i]);
            }
        } else {
            st.push(arr[i]);
        }
    }
    
    while(!st.empty()){
        // cout << st.top() << " ";
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), arr.end());
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &i : arr){
        cin >> i;
    }
    vector<int> ans; 

    ans = makeBeautiful(arr);

    for(auto i : ans){
        cout << i << " ";
    }
    return 0;
}