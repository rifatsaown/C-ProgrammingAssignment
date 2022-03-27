#include <stdio.h>
void main(){
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    if(num>=0 && num<=100){
        if(num>=90){
            printf("A");
        }
        else if(num>=80){
            printf("B");
        }
        else if(num>=70){
            printf("C");
        }
        else if(num>=60){
            printf("D");
        }
        else if(num<60){
            printf("F");
        }
    }
    else{
        printf("Not Valid Number");
    }
}