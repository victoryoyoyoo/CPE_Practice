#include<bits/stdc++.h>
using namespace std;

int hex_count(int n){
	int count = 0;
	while(n != 0){
		int a = n % 10;
		count += __builtin_popcount(a);
		n /= 10;
	}
	return count;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
		
	int N;
	cin >> N;
	while(N--){
		int M;
		cin >> M;
		cout << __builtin_popcount(M) << " " <<  hex_count(M) << "\n";
	}
	return 0;
}
