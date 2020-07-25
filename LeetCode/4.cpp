# include<iostream>
# include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        int k = n / 2; // 找第k小的数字(如果n是奇数，那么k刚好是中位数的前一个；如果n是偶数，那么k刚好是中位数的第一个)
        int index = k/2 - 1;// 去比较index为一半的数字
        
        
        
    }
};

int main(void){
    return 0;
}