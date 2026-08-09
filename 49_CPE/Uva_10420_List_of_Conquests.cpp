#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if(cin >> n){
        map<string, int> record;
        while(n--){
            string country, name;
            cin >> country;
            getline(cin, name);
            
            ++record[country];
        }
        for(const auto& x : record) cout << x.first << " " << x.second << "\n";
    }
    return 0;
}
