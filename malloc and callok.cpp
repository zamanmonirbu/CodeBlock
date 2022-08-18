#include<stdio.h>
#include<stdlib.h>
int main(){

    int *ptr1;
    ptr1=(int *)malloc(4*sizeof(int));
    if(ptr1==NULL){
        printf("Not Allocketded");
    }
    else
        printf("Allocated");



}
