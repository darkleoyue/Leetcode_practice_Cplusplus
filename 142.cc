/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr){
            return NULL;
        }

        ListNode *fast = head;
        ListNode *slow = head;

        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                break;
            }
        }

        if(fast != slow){
            return NULL;
        }else{
            fast = head;
        }

        while(fast != slow){
            fast = fast->next;
            slow = slow->next;
        }

        return fast;
        
    }
};
