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
    ListNode* middleNode(ListNode* head) {
        int listLen = 1;
        ListNode * current = head;
        while (current->next != nullptr)
        {
            current = current->next;
            listLen++;
        }
        ListNode * output = head;
        
        int target = listLen / 2 ;
        for(int i = 0 ; i < target;++i)
            output = output->next;
    return output;
    }
    
};
