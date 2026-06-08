#include<stdio.h>

struct Carmodel{
    char CarNumber[20];
    int CarPrice;
    int Maxspeed;
    float weight;

};

int main(){

    //Mehthod 1 of declaring and initializing the structure variable
     struct Carmodel CarBMW = {"BMW X5", 50000, 250, 2000.5};
     struct Carmodel CarAudi = {"Audi A4", 40000, 240, 1800.0};
    //Method 2 of declaring and initializing the structure variable
    struct Carmodel CarFord = {.CarNumber="FORD f214", .CarPrice=30000, .Maxspeed=230, .weight=1600.0};
    printf("Car Model: %s\n", CarBMW.CarNumber);
    printf("Car Price: %d\n", CarBMW.CarPrice);
    printf("Car Max Speed: %d\n", CarBMW.Maxspeed);
    return 0; 
}