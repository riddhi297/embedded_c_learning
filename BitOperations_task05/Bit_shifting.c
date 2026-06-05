#include<stdio.h>
int main(){
    //Setting the 4th position high bit to 1
    int a = 0x08;
    a = a | (1<<4);
    printf("Result: 0x%X\n", a);

    //Clearing the 4th position
    int b = 0x08;
    b = b & ~(1<<4);
    printf("Result: 0x%X\n", b);
    return 0;
}
