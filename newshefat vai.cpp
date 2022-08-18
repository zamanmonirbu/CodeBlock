#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int val) {
        value = val;
        next = NULL;
    }
};

Node* insertAtHead(Node* head, int val) { // O(1)
    Node* newBlock = new Node(val);
    newBlock -> next = head;
    return newBlock;
}

Node* insertAtEnd(Node* tail, int val) { // O(1)
    Node* newBlock = new Node(val);
    tail -> next = newBlock;
    return newBlock;
}

void insertAfter(Node* head, int targetValue, int val) { // O👎
    Node* newBlock = new Node(val);
    Node* currNode = head;

    while (currNode -> value != targetValue) {
        currNode = currNode -> next;
    }
    newBlock -> next = currNode -> next;
    currNode -> next = newBlock;
}

Node* deleteHead(Node* head) {
    Node* newHead = head -> next;
    free(head);
    return newHead;
}

Node* deleteTail(Node* head, Node* tail) {
    Node* currNode = head;

    while (currNode -> next != tail) {
        currNode = currNode -> next;
    }
    currNode -> next = NULL;

    return currNode;
}

void deleteValue(Node* head, int val) {
    Node* currNode = head;

    while (currNode -> next -> value != val) {
        currNode = currNode -> next;
    }
    Node* remNode = currNode -> next;
    Node* newNext = remNode -> next;

    currNode -> next = newNext;

    free(remNode);
}

void printAllNode(Node* head) {
    Node* currNode = head;

    while (currNode != NULL) {
        cout << currNode -> value << " ";
        currNode = currNode -> next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(3);
    Node* tail = head;

    printAllNode(head); // 3 -> NULL

    head = insertAtHead(head, 1);

    printAllNode(head); // 1 -> 3 -> NULL

    head = insertAtHead(head, 5); // 5 -> 1 -> 3 -> NULL
    head = insertAtHead(head, 9); // 9 -> 5 -> 1 -> 3 -> NULL

    printAllNode(head); // 9 -> 5 -> 1 -> 3 -> NULL

    head = insertAtHead(head, 2);

    printAllNode(head); // 2 -> 9 -> 5 -> 1 -> 3 -> NULL

    tail = insertAtEnd(tail, 109);
    tail = insertAtEnd(tail, 2005);

    printAllNode(head);

    insertAfter(head, 1, -90);
    insertAfter(head, 5, -100);

    printAllNode(head);
    head = deleteHead(head);
    printAllNode(head);
    tail = deleteTail(head, tail);
    tail = deleteTail(head, tail);
    printAllNode(head);

    deleteValue(head, -100);
    printAllNode(head);
}

/*
    int arr[5]; -> 20 bytes

    1. 8 bytes -> 2 int
    2. 4 bytes -> 1 int
    3. 12 bytes -> 3 int

    array = [3, 1, 4, 2, 5]

    linkedLIst = 3 -> 1 -> 4 -> 2 -> 5
                0x302 -> 0x483 -> 0x234 -> 0x742 -> 0x875

    {
        int val;
        pointer(*) -> nextValueAddre
    }

    int -> 4 bytes

    Linked List:

    Part 1:
        1. Non - contiguous memory block unlike array
        2. Dynamic array size
        3. Easy insertion and deletion

    Types:

        1. Singly Linked List
        2. Doubly Linked List
        3. Circular Linked List

    Coding:

        1. Design a Singly Linked List
        2. Insertion
            i. insert at the end
            ii. In the beginning
            iii. at any point

        3. Deletion
            i. first element
            ii. last element
            iii. any element
    Part 2:

        4. Design doubly linked list
        5. Design Circular linked list
        6. STL
*/
