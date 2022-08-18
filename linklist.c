#include<stdio.h>
struct node{
    int data;
    struct node *next;
};


int main(){
    int choice;
    struct node *newnode,*head,*tem;
    head=0;
    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter value");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==NULL){
        head=tem=newnode;
    }
    else{
        tem->next=newnode;
        tem=newnode;
    }
    printf("Do you want to continue(0,1)");

    scanf("%d",&choice);
    }

    tem=head;
    while(tem!=0){
        printf("%d",tem->data);
        tem=tem->next;
    }
    getch();





}
