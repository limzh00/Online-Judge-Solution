# include<iostream>
# include<vector>
# include<stdio.h>
typedef long long int ll;
using namespace std;

class Solution {
public:
    int shortestSubarray(vector<int>& A, int K);
};

ll min(ll a, ll b){
    if(a < b) return a;
    return b;
}

int 
Solution::shortestSubarray(vector<int>& A, int K){
    int res = -1;
    ll sum = 0; ll len = 1e6;
    vector<int>::iterator itr1 = A.begin();
    vector<int>::iterator itr2 = A.begin();
    int flag = 1;
    
    
    
}