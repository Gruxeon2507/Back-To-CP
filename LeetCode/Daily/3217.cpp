/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* temp = head;
        int a[100001]={0};
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        while(a[head->val]!=0){
            head=head->next;
        }
        temp=head;
        ListNode* pre=head;
        while(head->next!=NULL){
            if(a[head->val]!=0){
                pre->next=head->next;
                head=head->next;
                continue;
            }
            pre=head;
            head=head->next;
        }
        if(a[head->val]!=0){
            pre->next=NULL;
        }
        return temp;
    }
};