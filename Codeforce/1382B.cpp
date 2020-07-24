#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;
    for(int i = 0; i < t ; i++){
        int n; cin >> n;
        string winner = "First";
        vector<int> vec(n);
        bool flag = true;
        for(int j = 0; j < n; j++){
            cin >> vec[j];
            if(vec[j] == 1 && j != n - 1 && flag == true){
                if(winner == "First") winner = "Second";
                else if(winner == "Second") winner = "First";
            }
            else flag = false;
        }
        cout << winner << endl;
    }
    return 0;
}