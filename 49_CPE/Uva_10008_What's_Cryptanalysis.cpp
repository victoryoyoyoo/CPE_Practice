#include<bits/stdc++.h>
using namespace std;

struct Letter{
	char alpha;
	int cnt;
};

bool cmp(Letter a, Letter b){
	if(a.cnt != b.cnt) return a.cnt > b.cnt;
	return a.cnt < b.cnt;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	cin.ignore();
	
	int count[26] = {0};
	
	for(int i = 0;i < n;++i){
		string s;
		getline(cin, s);
		
		for(int j = 0;j < s.length();++j){
			char c = s[j];
			if(isalpha(c)){
				c = toupper(c);
				++count[c - 'A'];
			}
		}
	}
	
	Letter arr[26];
	for(int i = 0;i < 26;++i){
		arr[i].alpha = i + 'A';
		arr[i].cnt = count[i];
	}
	
	sort(arr, arr + 26, cmp);
	
	for(int i = 0;i < 26;++i){
		if(arr[i].cnt > 0) cout << arr[i].alpha << " " << arr[i].cnt << "\n";
	}
	return 0;
}
