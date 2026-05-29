#include<stdio.h>
extern int b; 
void counter1(); //function Prototypes
void counter2(); //function prototypes
void counter3(){
    b = b*3;
    printf("%d\n", b);
}

int main(){
    counter1();
    counter1();
    counter2();
    counter2();
    counter3();
    return 0;
}