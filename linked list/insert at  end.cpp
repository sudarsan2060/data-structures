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

void append(struct Node ** head_ref, int new_data) {
    struct Node * new_node = (struct Node * ) malloc(sizeof(struct Node));
    struct Node * last = * head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    while (last->next != NULL)
    {
      last = last->next;
    }
    last->next = new_node;
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
    append(&head, 11);
    print_list(head);
}


/* out put 
 1  2  3 
 1  2  3  11
 */
