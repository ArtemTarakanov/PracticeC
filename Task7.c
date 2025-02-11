#include <stdio.h>

int main(){
    float signal;
    printf("Введите частоту сигнала: ");
    scanf("%f", &signal);
    if(signal >=2.5 && signal<=3.5){
        printf("Связь стабильна.\n");
    } else{
        printf("Связь нестабильна.\n");
    }
    return 0;
}