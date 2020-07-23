# include<bits/stdc++.h>
using namespace std;
int main(void){
    int t;cin>>t;
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        vector<int> vec(n);
        for(int j = 0; j < n;j++){
            cin >> vec[j];
            if(j % 2 == 0) vec[j] = abs(vec[j]);
            else vec[j] = -abs(vec[j]);
        }
        for(int j = 0; j < n; j++) cout << vec[j] << " ";
        cout << endl;
    }
    return 0;
}