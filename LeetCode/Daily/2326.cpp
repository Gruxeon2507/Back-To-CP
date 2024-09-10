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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> res(m,vector<int>(n, -1));
        ListNode* temp = head;
        int mv[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
        int direction = 0;
        int x=0,y=0;
        for(;head!=NULL;head=head->next){
            res[x][y] = head -> val;
            int nx= x+mv[direction][0];
            int ny= y+mv[direction][1];
            if(nx==m||ny==n||ny<0||res[nx][ny]!=-1){
                direction =(direction+1)%4;
            }
            x+=mv[direction][0];
        }
        return res;
    }
};