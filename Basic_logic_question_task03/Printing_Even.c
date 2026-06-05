#include<stdio.h>
int main(){
    int a,b; 
    printf("Enter the range of numbers you want to print:");
    scanf("%d %d", &a, &b);
    printf("Even numbers between %d and %d are:\n", a, b);
    int counter = 0;
    for(int i=a; i<=b; i++){
        if(i%2 == 0){
            printf("%d\n", i);
            counter++;
        }
        else{
            continue;
        }

    }
    printf("Total even numbers: %d\n", counter);
}