#include<bits/stdc++.h>
using namespace std;

bool isPrime(int N){
    if(N <= 1) return false;
    for(int i = 2; i * i <= N; ++i) if(N % i == 0) return false;
    return true;
}

int reverseNumber(int N){
    int n = 0;
    while(N != 0){
        n = 10 * n + (N % 10);
        N /= 10;
    }
    return n;
}

bool isEmirp(int N){
    int reversed_N = reverseNumber(N);
    if(reversed_N == N) return false;
    return isPrime(reversed_N);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    while(cin >> N){
        if(!isPrime(N)) cout << N << " is not prime.\n";	
        else if(!isEmirp(N)) cout << N << " is prime.\n";
        else cout << N << " is emirp.\n";
    }
    return 0;
}
