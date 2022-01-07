
// time complexity=o(N)   space complexity o(N)  //
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

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node* it=head;
        
     map<Node*,Node*> mp;
        while(it!=0)
        {
            Node* temp =new Node(it->val);
            mp[it]=temp;
            it=it->next;
        }
        
        it =head;
        while(it!=0)
        {
            mp[it]->next=mp[it->next];
            mp[it]->random=mp[it->random];
            it=it->next;
        }
         
        return mp[head];
    }
};


// time complexity o(n)  space complexity o(1)  //

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

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node* it=head,*front=head;
       
        
        // make cpy of each node and linking them side 
        while(it!=0)
        {
            front=it->next;
            
            Node* cpy=new Node(it->val);
            it->next=cpy;
            cpy->next=front;
            
            it=front;
        }
        
        it=head;
       
      // connect random of copy 
        
        while(it!=0)
        {
            if(it->random!=0)
                it->next->random=it->random->next;
            
            it=it->next->next;
        }
        
        it=head;
         Node* dummy=new Node(0);
         Node* p=dummy;
        
      // restor original list and extract copy list  
        while(it!=0)
        {
            front=it->next->next;
            p->next=it->next;
            p=p->next;
            it->next=front;
            it=front;
        }
        
        return dummy->next;}
        
        
};
