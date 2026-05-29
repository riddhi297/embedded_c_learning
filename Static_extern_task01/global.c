#include<stdio.h>
int a = 0;
void counter1(){
    a++;
    printf("%d\n", a);
}
//As the a variable is global and it is declared outside of the counter1 function
// so it can be accessed by any function in the program and it will retain its value 
//between the function calls because it is global and it will be initialized to 0 only once when the program starts and it will be incremented by 1 every time the counter1 function is called and it will be doubled
void counter2(){
    a = a*2;
    printf("%d\n", a);
}

int main(){
    counter1();
    counter1();
    counter1();
    counter2();
    counter2();
    counter2();
    return 0;
}
