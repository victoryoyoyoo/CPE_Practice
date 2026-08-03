#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int m;
        cin >> m;
        
        vector<int> mm(m);
        for(int j = 0; j < m; ++j) cin >> mm[j]; 
        
        int c = m / 2;
        nth_element(mm.begin(), mm.begin() + c, mm.end());
        
        int sum = 0;
        
        for(int x : mm) sum += abs(mm[c] - x);
        cout << sum << "\n";
    }
    return 0;
}
