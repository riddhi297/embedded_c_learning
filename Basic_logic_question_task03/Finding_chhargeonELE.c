#include<stdio.h>
int main(){
    double numOfEle;
    double givenCHar;
    double cchargeOfELe = 1.602176634e-19;
    printf("Enter the charge in coulombs:");
    scanf("%lf",&givenCHar);
    numOfEle = givenCHar/cchargeOfELe;
    printf("Number of electron: %e",numOfEle);
    return 0;

}