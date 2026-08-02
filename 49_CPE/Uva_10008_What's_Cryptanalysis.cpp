#include<bits/stdc++.h>
using namespace std;

struct Letter{
    char alpha;
    int cnt;
};

bool cmp(Letter a, Letter b){
    if(a.cnt != b.cnt) return a.cnt > b.cnt;
    return a.alpha < b.alpha;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    cin.ignore();
    
    int count[26] = {0};
    
    for(int i = 0; i < n; ++i){
        string s;
        getline(cin, s);
        
        for(char c : s) if(isalpha(c)) ++count[toupper(c) - 'A'];
    }
    
    vector<Letter> arr;
    for(int i = 0; i < 26; ++i) if(count[i] > 0) arr.push_back({(char)(i + 'A'), count[i]});
    
    sort(arr.begin(), arr.end(), cmp);
    
    for(const auto& x : arr) cout << x.alpha << " " << x.cnt << "\n";
    
    return 0;
}
