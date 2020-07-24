# include<bits/stdc++.h>
using namespace std;
int main(void){
    int t;cin >> t;
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        vector<int> vec(n);
        int m, p, k, flag = 0;
        for(int j = 0; j < n ; j++){   
            cin >> vec[j];
        }
        for(int j = 0; j < vec.size(); j ++){
            if(j == 0) continue;
            if(j+1 == vec.size()) continue;
            if(vec[j - 1] < vec[j] && vec[j] > vec[j+1]){
                m = j;
                p = j + 1;
                k = j + 2;
                flag = 1;
                break;
            }
        }
        if(!flag) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            cout << m << " " << p << " " << k << endl;
        }
    }
    return 0;
}