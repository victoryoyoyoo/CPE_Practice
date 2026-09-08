#include<bits/stdc++.h>
using namespace std;

int Count = 0;

void solve(){
	int N;
	char skip;
	cin >> skip >> skip >> N;

	vector<vector<long long>> n(N, vector<long long>(N));
	for(int i = 0;i < N;++i) for(int j = 0;j < N;++j) cin >> n[i][j];
	++Count;

	bool isSymmetric = true;
	for(int i = 0;i < N && isSymmetric;++i){
		for(int j = 0;j < N;++j){
			if(n[i][j] < 0 || n[i][j] != n[N - 1 - i][N - 1 - j]){
				isSymmetric = false;
				break;
			}
		}
	}
	cout << "Test #" << Count << ": " << (isSymmetric ? "Symmetric." : "Non-symmetric.") << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while(T--) solve();

	return 0;
}