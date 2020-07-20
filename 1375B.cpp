#include <bits/stdc++.h>
using namespace std;
int main(void){
    int t;cin>>t;
    for(int i = 0; i < t; i++ ){
        int n, m;
        bool flag = true;
        cin >> n >> m;
        int grid[n][m];
        for(int j = 0; j < n; j++)
            for(int k = 0; k < m; k++)
                cin >> grid[j][k];            
        for(int j = 1; j < n - 1 ; j++){
            if(grid[j][0] > 3 || grid[j][m - 1] > 3) flag = false;
            grid[j][0] = grid[j][m-1] = 3;
        }
        for(int k = 1; k < m - 1 ; k++){
            if(grid[0][k] > 3 || grid[n - 1][k] > 3) flag = false;
            grid[0][k] = 3;
            grid[n-1][k] = 3;
        }
        if(grid[0][0] > 2 || grid[0][m-1] > 2|| grid[n-1][0] > 2||grid[n-1][m-1] > 2) flag = false;
        grid[0][0] = grid[0][m-1] = grid[n-1][0] = grid[n-1][m-1] = 2;
        for(int j = 1 ; j < n - 1; j++){
            for(int k = 1; k < m - 1; k++){
                if(grid[j][k] > 4) flag = false;
                grid[j][k] = 4;
            }
        }
        if(flag == false){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            for(int j = 0; j < n; j++){
                for(int k = 0; k < m; k++){
                    cout << grid[j][k] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}