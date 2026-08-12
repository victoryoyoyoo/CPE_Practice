#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a, b;
	while(getline(cin, a) && getline(cin, b)){
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		
		int i = 0, j = 0;
		
		while(i < a.length() && j < b.length()){
			if(a[i] == b[j]){
				cout << a[i];
				++i;
				++j;
			}else{
				if(a[i] > b[j]) ++j;
				else ++i;
			}
		}
		cout << "\n";
	}
	return 0;
}
