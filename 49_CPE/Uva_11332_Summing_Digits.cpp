#include<bits/stdc++.h>
using namespace std;

int sum_digits(long long n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    while(cin >> n && n != 0){
        while(n >= 10) n = sum_digits(n);
        cout << n << "\n";
    }
    return 0;
}
