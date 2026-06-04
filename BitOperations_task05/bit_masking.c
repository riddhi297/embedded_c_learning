#include<stdio.h>
int main(){
    int a;
    printf("Enter a number you want to check:");
    scanf("%d", &a);
    int mask = a&1;
    if(mask == 1){
        printf("%d is an odd number.\n", a);
    }
    else{
        printf("%d is an even number.\n", a);
            
    }

    return 0;
}