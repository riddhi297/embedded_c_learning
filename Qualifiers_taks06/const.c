#include<stdio.h>
int main(){

     const int a =10;
     //a++;  This will throw an error as we defined variable a as const. 
     //But this does not mean that we can not madify th vaiue of the variable.
     //we can modify value of a by using a pointer.
        printf("%d",a);
        int *ptr = (int *)&a;
        *ptr = 20;
    //here we changed the variable a value. 
    //So we can not change the variable value just by modifiing its name whlile 
    //using 'const' qualifier.
    //BUT IT IS ONLY FOR THE LOCAL CONST VARIABLES. 

        printf("%d",a);
     return 0;

     //IN STM32 EVEN IF WE TRY TO MODIFY THE VARIABLE USING ADDRESS IT IS NOT POSSIBLE TO CHANGE THE 
     //VALUE OFF THE VARIABLE AS IN STM32 IT GETS STORED IN THE FLASH MEMORY AND FLASH MEMORY 
     //IS THE READ ONLY MEMORY.
     


}