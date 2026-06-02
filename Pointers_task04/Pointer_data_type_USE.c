#include<stdio.h>

int main()
{
    // Pointer manually assigned to a random memory address
    // This memory location does NOT belong to our program
    char* address1 = (char*)0x00007FFFFE000;

    // Dereferencing means:
    // "Go to this memory address and read data"

    // char* reads 1 byte from memory
    // Program may crash because this address may be invalid
    // or protected by operating system
    printf("Value at address1: %c\n", *address1);



    // int* attempts to read 4 bytes from same memory location
    // Again this memory is not safely accessible
    int* address2 = (int*)0x00007FFFFE000;

    // May cause segmentation fault / access violation
    printf("Value at address2: %d\n", *address2);



    // long long int* attempts to read 8 bytes
    // from same invalid memory location
    long long int* address3 = (long long int*)0x00007FFFFE000;

    // Program crashes because operating system protects
    // random memory addresses from direct access
    printf("Value at address3: %lld\n", *address3);



    return 0;
}