#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* tempNode;
        while(tempNode){
            count++;
            tempNode=tempNode->next;
        }
        int temp=1;
        while (head){
            if(temp==(count)/2+1){
                return head;
            }
            temp++;
            head=head->next;
        }
        return head;
    }
};