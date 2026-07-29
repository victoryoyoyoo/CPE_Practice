#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i, j;
	while(cin >> i >> j){
		int a = i;
		int b = j;
		vector<int> s;
		int Max = 0;
		
		for(int k = i;k <= j;++k){
			int count = 0;
			
			while(k != 1){
				if(k % 2 == 0) k /= 2;
				else k = 3 * k + 1;
				++count;
			}
			s[k] = count;
			if(s[k] > Max) Max = s[k];
		}
		cout << a << " " << b << " " << Max << "\n";
	}
	return 0; 
}
