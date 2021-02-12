#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

typedef pair<long long, long long> cord;
long long grid[30][30];

int main(void){
    long long m, n, a, b;
    cin >> m >> n >> a >> b;
    // target destination is (a,b)
    uint count = 30;
    // initial
    vector<cord> vec = {cord(a,b), cord(a-1,b+2), cord(a-1,b-2), cord(a-2,b-1), cord(a-2,b+1), 
                        cord(a+1, b-2), cord(a+1, b+2), cord(a+2, b-1), cord(a+2, b+1)};
    grid[0][0] = 1;
    
    for (vector<cord>::iterator iter = vec.begin(); iter != vec.end(); iter ++){
        long long x = iter->first, y = iter->second;
        if (x >= 0 && y >= 0) {
            grid[x][y] = -1;
        }
    }

    for (size_t i = 1; i < count; i++){
        if (grid[i-1][0] == -1) {grid[i][0] = 0;}
        else if (grid[i][0] == -1) {continue;}
        else{ grid[i][0] = grid[i-1][0];}
    }

    for (size_t j = 1; j < count; j++){
        if (grid[0][j-1] == -1) {grid[0][j] = 0;}
        else if (grid[0][j] == -1) {continue;}
        else{ grid[0][j] = grid[0][j-1];}
    }

    for (size_t i = 1; i < count; i++){
        for (size_t j = 1; j < count; j++){
            if (grid[i][j] == -1) continue;
            if (grid[i-1][j] == -1) grid[i-1][j] = 0;
            if (grid[i][j-1] == -1) grid[i][j-1] = 0;
            
            grid[i][j] = grid[i-1][j] + grid[i][j-1];
        }
    }

    cout << grid[m][n] << endl;
}