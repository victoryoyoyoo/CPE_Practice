#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	while(cin >> n){
		vector<int> seq(n);
		for(int i = 0;i < n;++i) cin >> seq[i];
		if(n == 1){
			cout << "Jolly\n";
			continue;
		}
		
		vector<bool> seen(n, false);
		bool isJolly = true;
		
		for(int i = 0;i < n - 1;++i){
			int diff = abs(seq[i] - seq[i + 1]);
			if(diff >= 1 && diff <= n - 1 && !seen[diff]) seen[diff] = true;
			else{
				isJolly = false;
				break;
			}
		}
		if(isJolly) cout << "Jolly\n";
		else cout << "Not jolly\n";
	}
	return 0;
}
