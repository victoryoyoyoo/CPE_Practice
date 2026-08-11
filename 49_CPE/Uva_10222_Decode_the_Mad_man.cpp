#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string alpha = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
	char c;
	while(cin.get(c)){
		if(c == ' ' || c == '\n') cout << c;
		else{
			int pos = alpha.find(tolower(c));
			if(pos != string::npos) cout << alpha[pos - 2];
			else cout << c;
		}
	}
	return 0;
} 
