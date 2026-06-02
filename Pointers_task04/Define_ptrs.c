#include<stdio.h>
int main(){

    char *ptr1 = (char*)0x00007FFFFE000; // Pointer to a character at a specific memory address
    //Here we have done the explicit type casting to store the memory address in the 
    //pointer variable.
    //This is generally not recommended in practice, as it can lead to
    // undefined behavior if the memory address is not valid or if it is accessed without
    // proper permissions.
    //If we don't do this then it will consider theat value as a long long integer and it will
    // give us an error because we are trying to assign a long long integer to a char pointer.
    

}