#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    while(cin >> n >> m && (m != 0 || n != 0)){
        int count = 0;
        int carry = 0;
        
        while(n != 0 || m != 0){
            int a = n % 10;
            int b = m % 10;
            n /= 10;
            m /= 10;
            
            int sum = a + b + carry;
            if(sum >= 10) ++count;
            carry = sum / 10;
        } 
        if(count == 0) cout << "No carry operation.\n";
        else if(count == 1) cout << count << " carry operation.\n";
        else cout << count << " carry operations.\n";
    }
    return 0;
}
