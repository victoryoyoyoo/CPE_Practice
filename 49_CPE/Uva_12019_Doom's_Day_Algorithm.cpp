#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	 
	string date[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int n;
	cin >> n;
	
	for(int i = 0;i < n;++i){
		int M, D, d;
		cin >> M >> D;
		d = D - 1;
		
		for(int j = 0;j < M - 1;++j) d += day[j];
		
		int c = d % 7;
		cout << date[c] << "\n";
	}
	return 0;
}

// 1/10 Monday 1/3 Monday 1/1 Saturday
