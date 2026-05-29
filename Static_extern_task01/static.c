#include<stdio.h>
int counter(){
     static int a = 0; 
     // Static variable so it will be only accessible by the counter function 
     //but it will not initialized to 0 by every call of the counter function because
     // it is static and it will retain its value between the function calls  
     a++;
     printf("%d\n", a);
     
}

int counter2(){
     static int a = 0;  
      //if we remove the static keyword and declaration then it will throw an erro 
      //because the a variable is static and local to the only counter function 
     // so it can not be accessed by the counter2 function and it will throw an error of undeclared variable a 
     a = a*2;
     printf("%d\n", a);
     
}

int main(){
    
    counter();
    counter();
    counter();
    counter2();
    counter2();
    counter2();
    return 0;
}