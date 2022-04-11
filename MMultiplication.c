#include<stdio.h>
void main(){
    int first[10][10],second[10][10],result[10][10],i,j,k,c1,c2,r1,r2,sum=0;

    printf("Enter the number of rows and columns of first matrix : \n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and columns of second matrix : \n");
    scanf("%d%d",&r2,&c2);

    while(c1!=r2){
    printf("\n\nError !!!\n");
    printf("Enter the number of rows and columns of first matrix : \n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the number of rows and columns of second matrix : \n");
    scanf("%d%d",&r2,&c2);  
    }
    //imputting the values of first matrix
    printf("\n\n input 2nd matrix\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("[%d] [%d] ",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    //imputting the values of second matrix
    printf("\n\n input 2nd matrix\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("[%d] [%d] ",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    //multiplying the matrices
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){
                sum=sum+first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }

    //printing the values of first matrix
    printf("\n\n1st matrix\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    //printing the values of second matrix
    printf("\n\n2nd matrix\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    printf("\n\n2nd matrix\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}