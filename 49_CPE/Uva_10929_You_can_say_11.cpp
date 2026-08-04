#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string N;
	while(cin >> N && N != "0"){
		int sum = 0;
		int sign = 1;

		for(int i = 0; i < N.length();++i){
			int n = N[i] - '0';
			sum += n * sign;
			sign = -sign;
		}
		if(abs(sum) % 11 == 0) cout << N << " is a multiple of 11.\n";
		else cout << N << " is not a multiple of 11.\n";
	}
	return 0;
}
