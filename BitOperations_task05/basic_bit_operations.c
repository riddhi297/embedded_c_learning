#include<stdio.h>
int main(){
    
    int a, b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);

    int and_result = a & b;
    int or_result = a|b;
    int xor_result  = a^b;
    int not_a_result = ~a;
    int not_b_result = ~b;
    printf("Bitwise AND of %d and %d is: %d\n", a, b, and_result);
    printf("Bitwise OR of %d and %d is: %d\n", a, b, or_result);
    printf("Bitwise XOR of %d and %d is: %d\n", a, b, xor_result);
    printf("Bitwise NOT of %d is: %d\n", a, not_a_result);
    printf("Bitwise NOT of %d is: %d\n", b, not_b_result);
    return 0;
}