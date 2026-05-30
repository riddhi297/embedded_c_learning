#include <stdio.h>
#include "math.h"

//Here we just included the function prototypes in the different user defined header file
//Then we called the functions in the main function and printed the results
//User defined header file should actually be included using "" instead of <> as it is 
//not a standard library header file

int main(){
    int result = addition(5, 10);
    int result2 = subtraction(10, 5);
    int result3 = multiplication(5, 10);    
    int result4 = division(10, 5);
    printf("Subtraction: %d\n", result2);
    printf("Multiplication: %d\n", result3);
    printf("Division: %d\n", result4);
    printf("Addition: %d\n", result);
    return 0;
}