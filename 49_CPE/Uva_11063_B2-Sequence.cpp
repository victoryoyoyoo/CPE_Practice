#include<bits/stdc++.h>
using namespace std;

int cou = 0;

void solve(int n){
    ++cou;

    bool isB2 = true;
    vector<int> a(n);
    vector<bool> sumSeen(20001, false);

    for(int i = 0;i < n;++i) cin >> a[i];

    if(a[0] < 1) isB2 = false;
    for(int i = 1;i < n;++i) if(a[i - 1] >= a[i]) isB2 = false;

    for(int i = 0;i < n && isB2;++i){
        for(int j = i;j < n;++j){
            if(sumSeen[a[i] + a[j]] == true){
                isB2 = false;
                break;
            }else sumSeen[a[i] + a[j]] = true;
        }
    }
    cout << "Case #" << cou << ": It is ";
    if(isB2) cout << "a B2-Sequence.\n";
    else cout << "not a B2-Sequence.\n";
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while(cin >> n) solve(n);
    
    return 0;
}