#include<bits/stdc++.h>
using namespace std;

int solve(int count) {
    int deg = 1;       
    while(count != 9) {
        int next_sum = 0;
        while(count > 0) {
            next_sum += (count % 10);
            count /= 10;
        }
        count = next_sum; 
        deg++;          
    }
    return deg;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string N;
    while(cin >> N && N != "0"){
        int count = 0;
        for(char c : N) count += (c - '0');
        
        if(count % 9 != 0) cout << N << " is not a multiple of 9.\n";
		else cout << N << " is a multiple of 9 and has 9-degree " << solve(count) << ".\n";
    }
    return 0;
}
