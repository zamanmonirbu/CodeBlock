#include<stdio.h>
int main(){
//    int x;
//    x=10;
//    int *ptr;
//    ptr=&x;
//    printf("%d\n",x);
//    printf("%p\n",&x);
//    printf("%d\n",*ptr);
    int a[5]={3,1,2,4,5};
    for(int i=0;i<5;i++){
        printf("%d ",*(a+i));
    }



}
