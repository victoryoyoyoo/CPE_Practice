#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int i, j;
    while(cin >> i >> j){
        int a = i;
        int b = j;
        
        if(i > j) swap(i, j);
        
        int Max = 0;
        
        for(int k = i; k <= j; ++k){
            long long n = k;
            int count = 1;
            
            while(n != 1){
                if(n % 2 == 0) n /= 2;
				else n = 3 * n + 1;
                ++count;
            }
            if(count > Max) Max = count;
        }
        cout << a << " " << b << " " << Max << "\n";
    }
    return 0; 
}
