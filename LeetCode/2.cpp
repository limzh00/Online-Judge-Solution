# include<iostream>
# include<stdio.h>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

ListNode* 
Solution::addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode* head = new ListNode(0);
    ListNode* curr = head;
    ListNode* tail = head;
    while (1)
    {
        curr -> next = new ListNode((l1 -> val + l2 -> val + curr -> val) / 10);
        curr -> val = (l1 -> val + l2 -> val + curr -> val) % 10;
        tail = curr;
        curr = curr -> next;
        
        if(l1 -> next == NULL && l2 -> next == NULL) break;
        if(l1 -> next == NULL) l1 -> val = 0;
        else l1 = l1 -> next;
        if(l2 -> next == NULL) l2 -> val = 0;
        else l2 = l2 -> next;
        
    }
    if(!(curr -> val)) tail -> next = NULL;
    return head;   
}


int main(void){
    ListNode a1(2),a2(4),a3(3);
    ListNode b1(5),b2(6),b3(4);
    a1.next = &a2, a2.next = &a3;
    b1.next = &b2, b2.next = &b3;
    Solution sol;
    ListNode* node = sol.addTwoNumbers(&a1,&b1);
    while(node){
        cout << node -> val << " ";
        node = node->next;
    }
    cout << endl;
    return 0;
}