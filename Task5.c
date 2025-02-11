#include <stdio.h>

//Орбита спутника нестабильна, если скорость отличается от расчетной на более чем 0.1 м/с. 
//Напишите программу, которая принимает расчетную (double) и фактическую (double) скорости, затем определяет, стабильна ли орбита. 

int main(){
    double r, f;

    printf("Введите расчетную скорость: ");
    scanf("%lf", &r);

    printf("Введите фактическую скорость: ");
    scanf("%lf", &f);

    double difference = f - r;

    if(difference < 0){
        difference = - difference;
    }

    if(difference > 0.1){
        printf("Орбита нестабильна.\n");
    } else{
        printf("Орбита стабильна.\n");
    }
    return 0;
}