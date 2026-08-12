#include<bits/stdc++.h>
using namespace std;

long long divs[] = {10000000, 100000, 1000, 100}; // int
string units[] = {" kuti", " lakh", " hajar", " shata"};

void solve(long long n){
    for(int i = 0; i < 4;++i){
        if(n >= divs[i]){
        	solve(n / divs[i]);
            cout << units[i];
            n %= divs[i];
        }
    }
    if(n > 0) cout << " " << n;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    int caseNum = 1;
    
    while(cin >> n){
        cout << setw(4) << caseNum << ".";
        
        if(n == 0) cout << " 0";
        else solve(n);
        
        cout << "\n";
        caseNum++; 
    }
    return 0;
}
