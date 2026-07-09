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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int cnt = 0;
        while(curr && cnt < k){
            curr = curr->next;
            cnt++;
        }
        if(cnt==k){
            ListNode* currn = head;
            ListNode* prev = NULL;
            int cnt2 = 0;
            while(cnt2 < k){
                ListNode* nextn = currn->next;
                currn->next = prev;
                prev = currn;
                currn = nextn;
                cnt2++;
            }
            head->next = reverseKGroup(curr,k);
            return prev;
        }
        return head;
    }
};