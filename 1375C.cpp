# include<bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int n;cin>> n;
        vector<int> vec(n);
        for(int j = 0; j < vec.size(); j++){
            cin >> vec[j];
        }
        if(vec[0] < vec[n - 1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}