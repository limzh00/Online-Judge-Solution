# include<bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int n;cin>>n;
        vector<int> vec(n);
        for(vector<int>::iterator j = vec.begin(); j != vec.end(); j++)
            cin >> *j;
        reverse(vec.begin(), vec.end());
        int p = 0;
        while(p < n-1 && vec[p] <= vec[p + 1]) p++;
        while(p < n-1 && vec[p] >= vec[p + 1]) p++;
        cout << n - p - 1 << endl;
        
    }
    return 0;
}