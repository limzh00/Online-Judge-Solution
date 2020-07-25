# include<iostream>
# include<vector>
# include<string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s);
};

int
Solution::lengthOfLongestSubstring(string s){
    int res = 1; int j = 0;
    if(s.size() == 0) return 0;
    if(s.size() == 1) return 1;
    for(int i = 1; i < s.size(); i++){
        int tmp = j;
        while(s[i] != s[j] && i != j) j++; 
        j = (i == j) ? tmp : j+1;
        res = (res > i - j + 1) ? res : i - j + 1;
    }
    return res;
}

int main(void){
    string str = "dsfasdfadaser";
    Solution sol;
    int res = sol.lengthOfLongestSubstring(str);
    cout << res << endl;
    return 0;
}