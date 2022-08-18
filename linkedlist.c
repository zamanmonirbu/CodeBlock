#include<stdio.h>
#include<stdlib.h>
//Constract structure
struct Node{
    int data;
    struct Node *next;

};

int main(){
    //declare pointer variable
    struct Node *a=NULL;
    struct Node *b=NULL;
    struct Node *c=NULL;
//Dinamic memory for point variable
    a=(struct Node*)malloc(sizeof(struct Node));
    b=(struct Node*)malloc(sizeof(struct Node));
    c=(struct Node*)malloc(sizeof(struct Node));
//Insert data
    a->data=10;
    b->data=20;
    c->data=30;
//Relation between them
    a->next=b;
    b->next=c;
    c->next=NULL;
//print values
    while(a!=NULL){
        printf("%d ",a->data);
        a=a->next;
    }
}
