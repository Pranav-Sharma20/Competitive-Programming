//This template is created by Pranav Sharma
// Welcome back after a long time sir
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)


int Kth_Largest_Naive_Approach(vector<int> & nums, int k){
    sort(nums.begin(), nums.end(), greater<int>());
    return nums[k-1];
}


int Kth_Largest_Element_Using_Heap(vector<int> & nums, int k) {
    int n = nums.size();
    priority_queue<int, vector<int>, greater<int>> Min_Heap;
    for(int i = 0; i< n; i++){
        Min_Heap.push(nums[i]);
        if(Min_Heap.size()>k){
            Min_Heap.pop();
        }
    }
    return Min_Heap.top();
}

int Kth_Smallest_Naive_Approach(vector<int> & nums, int k){
    sort(nums.begin(), nums.end());
    return nums[k-1];
}

int Kth_Smallest_Element_Using_Heap(vector<int> & nums, int k) {
    int n = nums.size();
    priority_queue<int> Max_Heap;
    for(int i = 0; i< n; i++){
        Max_Heap.push(nums[i]);
        if(Max_Heap.size()>k){
            Max_Heap.pop();
        }
    }
    return Max_Heap.top();
}

vector<int> Kth_Small_Elements(vector<int> & nums, int k){
    int n = nums.size();
    vector<int> output;
    priority_queue<int> Max_Heap;
    for(int i = 0; i< n; i++){
        Max_Heap.push(nums[i]);
        if(Max_Heap.size()>k){
            Max_Heap.pop();
        }
    }
    while(!Max_Heap.empty()){
        output.push_back(Max_Heap.top());
        Max_Heap.pop();
    }
    return output;
}

vector<int> Sort_K_Sorted_Vector(vector<int> & nums, int k){
    vector<int> out;
    int n = nums.size();
    priority_queue<int, vector<int>, greater<int>> Min_Heap;
    for(int i = 0; i< n; i++){
        Min_Heap.push(nums[i]);
        if(Min_Heap.size()>k){
            out.push_back(Min_Heap.top());
            Min_Heap.pop();
        }
    }
    while(!Min_Heap.empty()){
        out.push_back(Min_Heap.top());
        Min_Heap.pop();
    }
    return out;
}

vector<int> Sort_K_Closest_Elements_To_x(vector<int> & nums, int k, int x){
    vector<int> out;
    vector<pair<int,int>> array_abs_diff;

    int n = nums.size();

    priority_queue<pair<int,int>> Max_Heap;
    for(int i = 0; i< n; i++){
        Max_Heap.push({abs(nums[i]-x),nums[i]});
        if(Max_Heap.size() > k){
            Max_Heap.pop();
        }
    }
    while(!Max_Heap.empty()){
        out.push_back(Max_Heap.top().second);
        Max_Heap.pop();
    }
    return out;
}

vector<int> K_Frequent_Elements(vector<int> & nums, int k){
    vector<int> out;
    unordered_map<int, int> mp;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> Max_Heap;
    for(auto i : nums){
        mp[i]++;
    }

    for(auto i : mp){
        Max_Heap.push({i.second, i.first});
        if(Max_Heap.size() > k){
            Max_Heap.pop();
        }
    }
    
    while(!Max_Heap.empty()){
        out.push_back(Max_Heap.top().second);
        Max_Heap.pop();
    }
    return out;
}

vector<int> frequency_Sort(vector<int> & nums, int k){
    vector<int> out;
    unordered_map<int, int> mp;
    priority_queue<pair<int,int>> Max_Heap;
    for(auto i : nums){
        mp[i]++;
    }

    for(auto i : mp){
        Max_Heap.push({i.second, i.first});
    }
    
    while(!Max_Heap.empty()){
        int ele = Max_Heap.top().first;
        for(int i = 0; i< ele; i++){
            out.push_back(Max_Heap.top().second);
        }
        Max_Heap.pop();
    }
    return out;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, k, x;
    cin >> t >> k;
    vector<int> nums(t);
    for(auto &i : nums){
        cin >> i;
    }
    // cout << "Largest Using sorting Approach :- " << Kth_Largest_Naive_Approach(nums, k) << endl;
    // cout << "Largest Using Heap Approach :- " <<  Kth_Largest_Element_Using_Heap(nums, k) << endl;
    // cout << "Smallest Using sorting Approach :- " << Kth_Smallest_Naive_Approach(nums, k) << endl;
    // cout << "Smallest Using Heap Approach :- " <<  Kth_Smallest_Element_Using_Heap(nums, k) << endl;
    // vector<int> ans;
    // ans = Kth_Small_Elements(nums, k);
    // for(auto i : ans){
    //     cout << i << " ";
    // }
    vector<int> out;
    out = frequency_Sort(nums, k);
    for(auto i : out){
        cout << i << " ";
    }
    return 0;
}

