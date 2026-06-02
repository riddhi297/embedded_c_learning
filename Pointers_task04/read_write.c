#include<stdio.h>

int main()
{
    // char stores ASCII values internally
    // 100 corresponds to character 'd' in ASCII table
    char random = 100;

    // Printing memory address of variable random
    printf("Address of Random Variable is: %p\n", &random);

    // Pointer ptr stores address of random variable
    char *ptr = &random;

    // *ptr means:
    // "Go to the address stored inside ptr
    // and access the value present there"

    // %c interprets the stored number as ASCII character
    // ASCII 100 = 'd'
    printf("Value of random variable: %c\n", *ptr);

    // Changing value at memory location using pointer
    // 65 corresponds to ASCII character 'A'
    *ptr = 65;

    // random value is now changed because ptr directly modified memory
    // ASCII 65 = 'A'
    printf("Value of random variable after going through the process: %c\n", random);

    return 0;
}