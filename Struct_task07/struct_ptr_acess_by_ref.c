#include <stdio.h>

struct DataSet{
    char data1;
    int data2;
};

void Display(struct DataSet *ptr){
    printf("char:%c\n", ptr->data1);
    printf("int:%d\n", ptr->data2);
}

int main(){
    struct DataSet Data = {'a', 10};
    Display(&Data);//Passed by the reference.

    return 0;


}