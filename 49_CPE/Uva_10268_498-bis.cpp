#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	while(cin >> a){ 
		string line;
		getline(cin >> ws, line);
		stringstream ss(line);

		vector<int> arr;
		int x;
		while(ss >> x) arr.push_back(x);

		int n = (int)arr.size() - 1;
		long long sum = 0, power = 1;
		for(int i = n - 1;i >= 0;--i){
			sum += (long long)arr[i] * (n - i) * power;
			power *= a;
		}
		cout << sum << "\n";
	}
	return 0;
}