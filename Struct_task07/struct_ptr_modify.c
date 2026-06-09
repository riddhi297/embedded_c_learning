#include<stdio.h>

struct DataSet{     //struct DataSet is a user-defined data type that contains two members: 
                     //data1 of type char and data2 of type int.
    char data1;
    int data2;
};

int main(){

    struct DataSet Data = {'a', 4}; //created variable Data with values

    printf("Before: %c\n", Data.data1);
    struct DataSet *ptr; //created a pointer 
    ptr = &Data; //which holds the address of Data variable
    ptr->data1 = 'b';//using -> dereferencing operator modified the value
    ptr->data2 = 5;
    printf("After: %c\n", Data.data1);

}

