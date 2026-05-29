#include<stdio.h>
int b = 0;
void counter1(){
    b++;
    printf("%d\n", b);
}
//As the variable b is global one it can be accessed from anywhere from the project.
//Here in this demo it also gets called in extern.c file.
void counter2(){
    b = b*2;
    printf("%d\n", b);
}


