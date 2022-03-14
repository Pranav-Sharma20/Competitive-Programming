#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	cin>>s;
	int countup=0,countlow=0;
	for(int i=0;i<s.size();i++){
	    if(isupper(s[i])){
	        countup++;
	    }else{
	        countlow++;
	    }
	}
	if(countup>countlow){
	    for(int i=0;i<s.size();i++){
	        s[i]=toupper(s[i]);
	    }
	}else{
	    for(int i=0;i<s.size();i++){
	        s[i]=tolower(s[i]);
	    }
	}
    cout << s;
	return 0;
}