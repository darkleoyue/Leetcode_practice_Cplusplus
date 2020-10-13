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

    ListNode* swapTwo(ListNode* node0){
        ListNode* node1 = node0->next;
        ListNode* node2 = node1->next;
        ListNode* node3 = node2->next;
        node2->next = node1;
        node1->next = node3;
        node0->next = node2;
        return node1;
    }

    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* res = head->next;
        ListNode node0 = ListNode(0, head);
        ListNode* node0ptr = &node0;
        while(node0ptr != nullptr && node0ptr->next != nullptr && node0ptr->next->next != nullptr){
            node0ptr = swapTwo(node0ptr);
        }
        return res;
    }
};
