#include<stdio.h>
int main(){
    int a;
    printf("Enter a random number:");
    scanf("%d",&a);
    int mask = a | 90;
    printf("The result of setting the bits of %d with the mask 90 is: %d\n", a, mask);
    return 0;
    

}
