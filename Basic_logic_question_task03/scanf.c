#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    printf("The three numbers are:%d %d %d",a,b,c);
    int average=(a+b+c)/3;
    printf("\nThe average of three numbers is:%d",average);
    return 0;
}