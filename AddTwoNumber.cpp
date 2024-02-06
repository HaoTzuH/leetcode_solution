//練link list
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* dummy = result;
        int carry=0;
        while(l1 != NULL || l2 != NULL)
        {
            result->val = 0;
            if(l1 != NULL)
            {
                result->val  += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL)
            {
               result->val += l2->val;
               l2 = l2->next;
            }
            result->val =carry+result->val;
            carry = result->val / 10;
            dummy->next = new ListNode(result->val % 10);//把dummynext 接上sum的結果
            dummy = dummy->next;
        }
        if(carry >0)
        {
           dummy->next = new ListNode(carry);
        }
        return result->next;
    }
};
