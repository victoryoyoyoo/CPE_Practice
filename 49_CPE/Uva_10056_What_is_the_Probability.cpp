#include<bits/stdc++.h>
using namespace std;

double calculateProbability(int num, double p, int I){
    if(p == 0.0) return 0.0000;  // If the denominator is 0, it will return NaN and cause an error. 
    else {
        double q = 1.0 - p;
        return p * (pow(q, I - 1) / (1.0 - pow(q, num)));
    } 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int S;
    cin >> S;
    while(S--){
        int num, I;
        double p;
        cin >> num >> p >> I;
        cout << fixed << setprecision(4) << calculateProbability(num, p, I) << "\n"; 
    }
    return 0;
}
