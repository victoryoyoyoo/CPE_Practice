#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int S;
	long long D;
	while(cin >> S >> D){
		while(D > S){
			D -= S;
			++S;			
		}
		cout << S << "\n"; 
	}
	return 0;
}
