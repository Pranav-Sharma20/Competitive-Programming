#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int t1 = 1; t1<= t; t1++){
        cout << "Case #" << t1 << ':'<< " ";
        string s;
        cin >> s;

        int og = s.size();
        int sum = 0;

        for(int i = 0; i< s.size() ; i++){
            sum += (s[i]-'0');
        }

        if(sum % 9 == 0){
            s.insert(s.begin()+1, '0');
            cout << s << endl;
        }
        else{
            int nxt = sum/9;
            nxt++;
            int to_add = nxt*9-sum;

            for(int i=0; i<s.size(); i++){
                if(to_add +'0' < s[i]){
                    s.insert(s.begin()+i,to_add+'0');
                    break;
                }
            }
            if(s.size() == og ) s.push_back(to_add+'0');
            cout << s << endl;
        }
    }

    return 0;
}