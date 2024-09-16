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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* ans = head;

        while (head != nullptr && head->next != nullptr) {
            int mid = gcd(head->val, head->next->val);

            ListNode* newNode = new ListNode(mid);

            newNode->next = head->next;
            head->next = newNode;

            head = newNode->next;
        }
        return ans;
    }
};