#include<stdio.h>
int main(){
    long int p,q,c=0,d,i,a[10000],b[10000];
    scanf("%ld%ld",&d,&q);
    for(i=1;i<=q;i++){
        scanf("%ld",&a[i]);
        p=a[i]%d;
        b[p]=b[p]+1;
        if(b[p]>1)
            c++;
    }
    printf("%d",c);

}
