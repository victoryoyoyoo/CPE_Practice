#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<string> lines;
	string s;
	int max_len = 0; 
	
	while(getline(cin, s)){
		lines.push_back(s);
		if((int)s.length() > max_len) max_len = s.length();
	}
	
	int total = lines.size();
	
	for(int i = 0;i < max_len;++i){
		for(int j = total - 1;j >= 0;--j){
			if(i < lines[j].length()) cout << lines[j][i];
			else cout << " ";
		}
		cout << "\n";
	}
	return 0;
}
