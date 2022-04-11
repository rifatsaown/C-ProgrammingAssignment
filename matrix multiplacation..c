#include<stdio.h>
int main(){
    int first[3][4],last[4][2],result[3][2];
    int m,n,sum=0;
    printf("enter the 1st\n");
    for (int i = 0; i < 3; i++)
        {
        for (int j = 0; j < 4; j++)
        {
            printf("input [%d] [%d]",i+1, j+1);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
        }
    printf("enter the 2nd\n");
    for (int i = 0; i < 4; i++)
        {
        for (int j = 0; j < 2; j++)
        {
            printf("input [%d] [%d]",i+1, j+1);
            scanf("%d",&last[i][j]);
        }
        printf("\n");
        }
}
