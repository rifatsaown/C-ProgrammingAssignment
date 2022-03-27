#include<stdio.h>
void main(){
    float c , f;
    printf("Input Celsius : ");
    scanf("%f", &c);
    f=(c*9/5)+32;
    printf("Fahrenheit : %.2f\n",f);
    c=(f-32)*5/9;
    printf("Celsius : %.2f",c);
}