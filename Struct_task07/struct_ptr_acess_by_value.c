#include<stdio.h>

struct DataSet{
    char data1;
    int data2;

};

void Display(struct DataSet Data){
    printf("char:%c\n", Data.data1);
    printf("int:%d\n", Data.data2);
}

int main(){
    struct DataSet Data = {'a', 10};
    Display(Data);//Passed by the value which is rarely used in C programming language.

    return 0;


}