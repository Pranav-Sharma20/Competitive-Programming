// // //This temperorylate is created by Pranav Sharma
// // #include<bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // #define forn(i, n) for (int i = 0; i < n; i++)
// // #define forr(i, n) for (int i = n; i >=0; --i)

// void solve() {
//     int n;
//     cin >> n;
//     set<char> arr;
//     arr.insert('e');
//     arr.insert('i');
//     arr.insert('o');
//     arr.insert('u');
//     arr.insert('a');

//     string s;
//     cin >> s;

//     int counting = 0;
//     for(auto i : s){
//         if(arr.find(i) != arr.end()){
//             counting = 0;
//         }
//         else{
//             counting++;
//         }
//         if(counting >= 4){
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "YES" << endl;
// }

// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int t;
// //     cin >> t;
// //     while(t--){
// //          solve();
// //     }
// //     return 0;
// // }

// // This temperorylate is created by Pranav Sharma
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define forn(i, n) for (int i = 0; i < n; i++)
// #define forr(i, n) for (int i = n; i >= 0; --i)

// void solve()
// {
//     int n;
//     cin >> n;

//     if (n % 2 != 0)
//     {
//         cout << "NO" << endl;
//     }
//     string s;
//     cin >> s;

//     map<char, int> even;
//     map<char, int> odd;
//     unordered_map<char, int> umap;
//     for (int i = 0; i < n; i++)
//     {
//         if(i%2 == 0){
//             even[s[i]]++;
//         } else {
//             odd[s[i]]++;
//         }
//         umap[s[i]]++;
//     }

//     for (auto i : umap)
//     {
//         if (i.second % 2 != 0)
//         {
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     if(even == odd){
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     // for(auto i: even){
//     //     cout << i.first  << " " << i.second << endl;
//     // }
//     // for(auto i: odd){
//     //     cout << i.first  << " " << i.second << endl;
//     // }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

//This temperorylate is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)




void solve() {
    ll n;
    cin>>n;
    vector<ll> nums1(n,0);
    vector<ll> nums2(n,0);
    forn(i,n){
        cin>>nums1[i];
    }
    forn(i,n){
        cin>>nums2[i];
    }
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    if(n==1){
        cout << nums1[0]+nums2[0] << endl;
    }else{
        int ind=n/2;
        reverse(nums2.begin()+ind,nums2.end());
        vector<ll> temperory;
        for(int kind=ind;kind<n;kind++){
            ll ele = nums1[kind]+nums2[kind];
            temperory.push_back(ele);
        }
        sort(temperory.begin(),temperory.end());
        cout << temperory[0] << endl;
        return;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
         solve();
    }
    return 0;
}