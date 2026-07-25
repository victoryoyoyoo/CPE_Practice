#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i){
        int s, d;
        cin >> s >> d;
        
        if(s < 0 || d < 0 || s < d || (s + d) % 2 != 0){
            cout << "impossible\n";
            continue;
        }
        
        int a = (s + d) / 2;
        int b = s - a;
        
        cout << a << " " << b << "\n";
    }
    return 0;
}