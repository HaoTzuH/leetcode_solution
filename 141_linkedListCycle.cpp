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
    bool hasCycle(ListNode *head) {
        if(head == nullptr)
        {
            return false;
        }
        //雙指針 快指針一次走兩步
        //慢指針 一次一步
        //有迴圈快會追上慢

        ListNode *slow = head;
        ListNode *fast = head->next;
        while(slow != fast)
        {
            if(fast == nullptr || fast->next == nullptr)
            {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};
