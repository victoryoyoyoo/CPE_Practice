#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	char c;
	int isFirst = 1;
	
	while(cin.get(c)){
		if(c == '"'){
			cout << (isFirst ? "``" : "''");
			isFirst ^= 1;
		}else cout << c;
	}
	return 0;
}
