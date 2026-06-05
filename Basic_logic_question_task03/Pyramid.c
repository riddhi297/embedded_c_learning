#include<stdio.h>
int main(){
    int a;
    printf("Enter the heightof the pyramid:", a);
    scanf("%d", &a);
    for(int i=1; i<a; i++){
           printf("\n");
        for(int j=i ; j>0; j--){
            printf("%d", j);
        }

    }

    return 0;
}