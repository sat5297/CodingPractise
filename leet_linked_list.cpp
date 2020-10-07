/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        
        Node* head1 = NULL;
        Node* curr = head;
        
        if(head == NULL)
           return head;
        
        list <Node*> q;
        
        while(curr != NULL)
        {
            q.push_back(curr);
            curr = curr->next;
        }
        
        Node* front = nullptr;
        
        while(!q.empty())
        {
            front = q.front();
            q.pop_front();

            if(front->child != NULL)
                head1-> next = flatten(front->child);
            else
                head1->next = front;
        }
        return head1;
    }
};
