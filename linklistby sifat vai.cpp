#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int value;
    Node*next;

    Node(int val){
    int value=val;
    Node next=NULL;
    }

};

void insertHead(Node* head,int val){
    Node* newBlock= new Node(val);
    return newBlock;

}
void printAllNode(Node *head){
    Node* currentNode= head;
    while(currentNode!=NULL)


}

int main(){

Node* head= new Node(3);
insertHead(head,1);



}
