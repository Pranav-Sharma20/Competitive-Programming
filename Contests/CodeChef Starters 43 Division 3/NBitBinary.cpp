#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

    void solve(int n, int& sum, string& s,vector<string>& ans){
        // Base case
        if(sum == n){
            ans.push_back(s);
            return;
        }
        
        // Pick one
        s.push_back('1');
        sum += 1;
        solve(n,sum,s,ans);
        sum -= 1;
        s.pop_back();
        
        // Pick zero
        if(sum > 0){
            s.push_back('0');
            sum -= 1;
            solve(n,sum,s,ans);
            sum += 1;
            s.pop_back();
        }
    }
    
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string> ans;
	    string temp = "";
	    int sum = 0;
	    solve(N,sum,temp,ans);
	    return ans;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends