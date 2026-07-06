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
    int getDecimalValue(ListNode* head) {
        vector<int> res;
        ListNode* temp = head;
        while(temp != NULL){
            res.push_back(temp->val);
            temp = temp->next;
        }
        int j =0;
        int sum = 0;
        for(int i=res.size() - 1;i>=0;i--){
            sum = sum + res[i] * pow(2,j++);
        }
        return sum;
    }
};