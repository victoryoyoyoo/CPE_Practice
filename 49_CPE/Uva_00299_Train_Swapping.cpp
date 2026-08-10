#include<bits/stdc++.h>
using namespace std;

int sort_count(vector<int>& train){
    int count = 0, n = train.size();
    for(int i = 0;i < n - 1;++i){
        bool swapped = false;
        for(int j = 0;j < n - 1 - i;++j){
            if(train[j] > train[j + 1]){
                swap(train[j], train[j + 1]);
                ++count;
                swapped = true;
            }
        }
        if(!swapped) break;
    }
    return count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    if(cin >> N){
        while(N--){
            int L;
            cin >> L;
            vector<int> train(L);
            for(int i = 0;i < L;++i) cin >> train[i]; 
            cout << "Optimal train swapping takes " << sort_count(train) << " swaps.\n";
        }
    }
    return 0;
}
