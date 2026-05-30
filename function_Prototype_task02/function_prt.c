#include<stdio.h>
int returnSum(int , int );
//Here we are using function prototype to declare the function before the actual defination.
//This is useful when we want to call the function before its defination in the code. 
//It helps the compiler to understand that the function exists and what parameters it takes, even 
//if the actual defination comes later in the code.
int main(){
     returnSum(5, 10);
     printf("The sum of 5 and 10 is: %d", returnSum(5, 10));
}
//If we don't add function prototype and try to call the function before its defination 
//the compiler will throw an error because it doesn't know about the function and its parameters.
//(implecit declaration error)
int returnSum(int a, int b){
    return a + b;
}