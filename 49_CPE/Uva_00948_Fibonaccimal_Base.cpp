#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int fib[100] = {0};
    
    fib[0] = 1;
    fib[1] = 2;
    int count = 2;

    while(fib[count - 1] + fib[count - 2] <= 100000000){
        fib[count] = fib[count - 1] + fib[count - 2];
        ++count;
    }
    
    if(cin >> N){
        while(N--){
            int n;
            cin >> n;
            int original_n = n;
            int j = 0;
            
            for(int i = count - 1;i >= 0;--i){
                if(fib[i] <= n){
                    j = i;
                    break;
                }
            }
            
            string s = "";
            cout << original_n << " = ";
            
            for(int i = j;i >= 0;--i){
                if(n >= fib[i]){
                    n -= fib[i];
                    cout << "1";
                }else cout << "0";
        	}
            cout  << " (fib)\n"; 
        }
    }
    return 0;
}
