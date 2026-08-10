#include<bits/stdc++.h>
using namespace std;

int dx[8] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[8] = {-1,  0,  1, -1, 1, -1, 0, 1};

char grid[101][101]; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    int field_count = 1;
    
    while(cin >> n >> m && (n != 0 || m != 0)){
        if(field_count > 1) cout << "\n";
        
        for(int i = 0;i < n;++i){
            for(int j = 0;j < m;++j){
                cin >> grid[i][j];
                if(grid[i][j] == '.') grid[i][j] = '0'; 
            }
        }
        
        for(int i = 0;i < n;++i){
            for(int j = 0;j < m;++j){
                if(grid[i][j] == '*'){
                    for(int k = 0;k < 8;++k){
                        int nx = i + dx[k];
                        int ny = j + dy[k];
                        
                        if(nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] != '*') grid[nx][ny]++;
                    }
                }
            }
        }
        cout << "Field #" << field_count << ":\n";
        for(int i = 0;i < n;++i){
            for(int j = 0;j < m;++j) cout << grid[i][j];
            cout << "\n";
        }
        ++field_count;
    }
    return 0;
}
