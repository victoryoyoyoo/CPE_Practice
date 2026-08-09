#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout << fixed << setprecision(4);
    int n;
    if(cin >> n){
        string temp;
        cin.ignore(10000, '\n');
        getline(cin, temp);
        
        while(n--){
            map<string, int> tree;
            int total = 0;
            string name;
            
            while(getline(cin, name) && name != ""){
                ++tree[name];
                ++total;
            }
            
            for(const auto& x : tree){
                double percentage = (double)x.second / total * 100.0;
                cout << x.first << " " << percentage << "\n";
            }
            if(n > 0) cout << "\n";
        }   
    }
    return 0;
}
