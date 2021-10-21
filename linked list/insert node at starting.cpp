#include <cstddef>
#include <iostream>

using namespace std;

class Node {
    public:
        int data;
    Node * next;
};

void print_list(Node * n) {
    cout << "\nPrinting new list..." << endl;
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
} 
 
void push(Node **p,int data){
    Node*n1;
    n1=new Node();
    n1->data=data;
    n1->next=*p;
    *p=n1;
}
int main() {
    Node * head = NULL;
    Node * second = NULL;
    Node * third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    print_list(head);
    push(&head, 11);
    print_list(head);
}

/*out put
1 2 3
11 1 2 3 
 */
