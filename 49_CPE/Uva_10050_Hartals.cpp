#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	if(cin >> T){
		while(T--){
			int N, P;
			cin >> N >> P;
			vector<int> s(P);
			
			for(int i = 0;i < P;++i) cin >> s[i];
			
			int total_lost = 0;
			
			for(int j = 1;j <= N;++j){
				if(j % 7 == 6 || j % 7 == 0) continue;
				
				bool is_hartal = false;
				for(int k = 0;k < P;++k){
					if(j % s[k] == 0){
						is_hartal = true;
						break;
					}
				}
				if(is_hartal) ++total_lost;
			}
			cout << total_lost << "\n";
		}
	}
	return 0;
}
