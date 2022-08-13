//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)

bool helper(vector<int>& nums,vector<int>& temp, int i, int n,int & sum, int& target, int & ans){
    if(i == n){
        // condition met then return true for printing only one
        if(sum == target){
            for(auto i : temp){
                cout << i << " ";
            }
            cout << endl;
            return true;
        }
        // condition not satisfied
        return false;
    }
    temp.push_back(nums[i]);
    sum += nums[i];
    if(helper(nums,temp, i+1, n, sum, target, ans) == true) return true;
    temp.pop_back();
    sum -= nums[i];
    if(helper(nums,temp, i+1, n, sum, target, ans) == true) return true;
    return false;
}

int Sum(vector<int>& nums, int k) {
    int n = nums.size();
    int sum = 0;
    int ans = 0;
    vector<int> temp;
    helper(nums,temp, 0, n, sum, k, ans);
    return ans;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, target;
    cin >> t;
    cin >> target;
    vector<int> nums(t);
    for(auto &i : nums){
        cin >> i;
    }

    Sum(nums, target);
    return 0;
}