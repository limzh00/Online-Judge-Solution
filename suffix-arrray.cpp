/*suffix-array algorithm is to 
store and sort suffix-array of a string in O(nlog^2(n))*/

#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >> t;
    s += "$";
    int n = s.size()
    vector<int> p(n), c(n);
    {
        // k = 0
        vector<pair<char, int>> a(n);
        for (size_t i = 0; i < n; i++)
        {
            a[i] = {s[i], i};
        }

        sort(a.begin(), a.end());

        for (size_t i = 1; i < n; i++)
        {
            if (a[i].first == a[i - 1].first)
        }
        
        
    }
    return 0;
}