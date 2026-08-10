#include<bits/stdc++.h>
using namespace std;

int M;

bool cmp(int x, int y){
    int mod_x = x % M;
    int mod_y = y % M;
    if(mod_x != mod_y) return mod_x < mod_y;
    
    bool isOdd_x = x & 1; 
    bool isOdd_y = y & 1;
    
    if(isOdd_x != isOdd_y) return isOdd_x; 
    
    if(isOdd_x) return x > y;
    else return x < y;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    vector<int> num; 
    
    while(cin >> N >> M && (N != 0 || M != 0)){
        num.resize(N); 
        
        for(int i = 0; i < N; ++i) cin >> num[i];
        
        sort(num.begin(), num.end(), cmp);
        
        cout << N << " " << M << "\n";
        for(int i = 0; i < N; ++i) cout << num[i] << "\n";
    }
    cout << "0 0\n";
    return 0;
}
