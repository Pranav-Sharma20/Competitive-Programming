//This template is created by Pranav Sharma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >=0; --i)

void solve(int col, vector<string>& board, vector<vector<string>>& ans,vector<int>& left, vector<int>& upper, vector<int>& lower, int n){
    // base case - when our column reaches the end of the matrix
    if(col == n){
        ans.push_back(board);
        return;
    }

    // Iterate for all the n rows and then check the hash maps for the confirmation 
    for(int row = 0; row < n; row++){
        if(left[row] == 0 && lower[row + col] == 0 && upper[n-1+col-row] == 0){
            // hashing all the values that now they are present
            board[row][col] = 'Q';
            left[row] = 1;
            lower[row + col] = 1;
            upper[n-1+col-row] = 1;

            //recursive calls for the solve fuction
            solve(col+1, board, ans, left, upper, lower, n); 

            // while returning just remove the 'Q' that has been inserted before
            board[row][col] = '.';
            left[row] = 0;
            lower[row + col] = 0;
            upper[n-1+col-row] = 0;
        }
    }
    
}


// Fuction given to implement
vector<vector<string>> n_queens(int n){
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n,'.');
    
    for(auto &i: board){
        i = s;
    }

    // used hashing for the fuction to check if we can fill or not to reduce the time complexity 
    vector<int> left(n,0), upper(2*n-1, 0), lower(2*n-1, 0);
    solve(0, board, ans, left, upper, lower, n); 
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    vector<vector<string>> ans;
    ans = n_queens(t);

    // Printing
    for(auto board: ans){
        for(auto row : board){
            cout << row << endl;
        } cout << endl;
    }

    return 0;
}