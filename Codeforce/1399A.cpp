# include<bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        string res = "YES";
        int n;cin>>n;
        vector<int> vec(n);
        for(int j = 0; j < n; j++) cin >> vec[j];
        sort(vec.begin(),vec.end());
        for(int j = 1; j < n; j++){
            if(vec[j] - vec[j-1] > 1){res = "NO"; break;}
        }
        cout << res << endl;
    }
}