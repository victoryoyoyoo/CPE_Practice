#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int i;
    while(cin >> i && i != 0){
        int count = 0;
        int k = i;
        string binary = "";

        while(k != 0){
            int j = k & 1; // int j = k % 2; 
            if(j == 1) ++count;
            binary += char('0' + j); // binary = to_string(j) + binary;
			k >>= 1; // k /= 2;
        }
        reverse(binary.begin(), binary.end());
        cout << "The parity of " << binary << " is " << count << " (mod 2).\n";
    }
    return 0;
}
