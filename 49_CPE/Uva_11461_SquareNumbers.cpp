#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    while(cin >> a >> b && (a != 0 || b != 0)){
        int start = sqrt(a);
        int end = sqrt(b);
        
        if(start * start < a){
            ++start; 
        }
        
        if(start <= end){
            cout << end - start + 1 << "\n";
        }else{
            cout << 0 << "\n";
        }
    }
    return 0;
}
