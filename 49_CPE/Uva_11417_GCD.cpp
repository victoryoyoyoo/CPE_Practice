#include<bits/stdc++.h>
using namespace std;

int GCD(int i, int j){
	if(j == 0) return i;
	return GCD(j, i % j);
} 

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	while(cin >> N && N != 0){
		int G = 0;
		for(int i = 1;i < N;++i) for(int j = i + 1;j <= N;++j) G += GCD(i, j);
		cout << G << "\n";
	}
	return 0;
}
