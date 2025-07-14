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
        int sum = 0;
        int flag = 1;
        while(head != NULL)
        {
            res.push_back(head->val);
            head = head->next;
        }
        for(int i = res.size()-1; i >= 0; i--)
        {
            sum+= flag*res[i];
            flag*=2;
        }
        return sum;
        
    }
};