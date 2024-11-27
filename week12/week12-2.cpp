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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*ans=new ListNode();
        ListNode*now = ans;
        while(list1 != nullptr && list2 != nullptr){
            if(list1->val<list2->val){
                now->next=new ListNode(list1->val);
                now=now->next;
            }
            else{
                now->next=new ListNode(list2->val);
                list2=list2->next;
                now=now->next;
            }
        }
        return ans->next;
    }
};