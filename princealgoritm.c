#include<stdio.h>

int v[100],u[100],w[100];
void swap(*a,*b){
    int *tem;
    *tem=*a;
    *a=*b;
    *b=*tem;
}
void MST_prim()
{

}

int main()
{
    int vertex,edge,u,v,w,first[100],second[100],weight[100];
    scanf("%d%d",&vertex,&edge);
    for(int i=0; i<edge; i++)
    {
        scanf("%d%d%d",&first[i],second[i],weight[i]);
    }

    for(int i;i<vertex;i++){
        key[i]=100000;
        parent[i]=-1;
    }
    int queue[vertex];
    for(i=0;i<edge-1;i++){
        for(j=i+1;j<vertex;j++){
            swap(&weight[i],&weight[j]);
            swap(&first[i],&first[j]);
            swap(&second[i],&second[j]);
        }
    }


}
