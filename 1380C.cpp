#include <bits/stdc++.h>

using namespace std;
int main(void){
    int t, result = 0, curr = 0;
    cin >> t;
    for(int i = 0; i < t ; i++){
        int n, x;
        cin >> n >> x;
        vector<int> vec(n);
        for(vector<int>::iterator j = vec.begin(); j != vec.end(); j++){
            cin >> *j;
        }

        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());
        for (int j = 0; j < vec.size(); j++){
            curr++;
            if(curr * vec[j] >= x){
                result ++;
                curr = 0;
            }
        }
        cout << result << endl;
        curr = 0;
        result = 0;
    }
    return 0;
}