#include<stdio.h>
int main(){
    printf("Enter the character:");
    char a1,a2,a3,a4,a5;
    scanf("%c %c %c %c %c",&a1,&a2,&a3,&a4,&a5);
    printf("The ASCII values of the characters are:%d %d %d %d %d",a1,a2,a3,a4,a5);
    printf("Presss enter to exit the application...");
    while(getchar()!='\n'){
        //do nothing
    }
    getchar();

    printf("Exiting the application...");
    //getchar();
    return 0;
}