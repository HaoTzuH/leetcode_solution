/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
//查到舊的node跟新的node對應的位置，這樣針對新的node在指向random的時候，我們就可以改指向對應的新node
class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> oldtocopy;//先產生一個map紀錄所有資訊
        Node* cur = head;
        while(cur)
        {
            oldtocopy[cur]=new Node(cur->val);
            cur = cur->next;
        }
        cur = head;
        while(cur)
        {
            oldtocopy[cur]->next = oldtocopy[cur->next];
            oldtocopy[cur]->random = oldtocopy[cur->random];
            cur= cur->next;
        }
        return oldtocopy[head];

    }
};
