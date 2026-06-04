#include<stdio.h>
int main(){
    int a;
    printf("Enter a random number:");
    scanf("%d",&a);
    int mask = a&0x8F;
    printf("The result of clearing the bits of %d with the mask 0x8F is: %d\n", a, mask);
    return 0;
}