#include<stdio.h>
int no_vartiex;
void printGraph(int adj[][no_vartiex])
{
    for(int i=0; i<no_vartiex; i++)
    {
        for(int j=0; j<no_vartiex; j++)
        {
            printf("%d",adj[i][j]);
        }
        printf("\n");
    }
}
int  main()
{
    int s,d;
    printf("Enter the vartexes\n");
    scanf("%d",&no_vartiex);
    int adj[no_vartiex][no_vartiex];
        for(int i=0; i<no_vartiex; i++)
            for(int j=0; j<no_vartiex; j++)
                adj[i][j]=0;
            while(s!=-1&&d!=-1){
                printf("Enter edge %d and %d",no_vartiex,no_vartiex);
                scanf("%d",&s&d);
                adj[s][d]=1;
                adj[d][s]=1;


            }


    }



//336-A
//762
//BFS code






