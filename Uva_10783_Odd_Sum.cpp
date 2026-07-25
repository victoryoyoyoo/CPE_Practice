#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for(int i = 1; i <= T;++i){
    	int a, b, sum = 0;
    	cin >> a >> b;
        
        if(a > b) swap(a, b);
        if(a % 2 == 0) a++;
        
        for(int j = a;j <= b;j += 2) sum += j;

        cout << "Case " << i << ": " << sum << "\n";
    }
    return 0;
}