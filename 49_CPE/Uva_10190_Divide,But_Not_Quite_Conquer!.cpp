#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, m;
    while(cin >> n >> m){
        if(m <= 1 || n <= 0){
            cout << "Boring!\n";
            continue;
        }
        
        vector<long long> a;
        a.push_back(n);
            
        while(n % m == 0){
            n /= m;
            a.push_back(n);
        }
    
        if(n == 1){
            for(int i = 0; i < a.size() - 1; ++i){
                cout << a[i] << " ";
            }
            cout << a.back() << "\n";
        } else {
            cout << "Boring!\n";
        }
    }
    return 0;
}
