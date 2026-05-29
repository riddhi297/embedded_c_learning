#include<stdio.h>
int systemclk = 0;

//this functions is declared as static function that means
//only this file can acess the function and it can not be accessed by another file 
//or called by another function. 
//This helps to keep the function private to this file.

static void changesystemclk(){
    systemclk = systemclk + 1;
    printf("System clock changed to %d\n", systemclk);
}