#include <stdio.h>
 //Допустимая температура корпуса спутника находится в диапазоне от -150°C до +120°C.
 // Используйте int для представления температуры и напишите программу, определяющую, лежит ли заданная температура в допустимых значениях. 

 int main(){
    int temp;
    printf("Введите температуру: ");
    scanf("%d", &temp);

    if(temp>=-150 && temp<=120){
        printf("Температура лежит в заданных значениях.\n");

    } else {
        printf("Температура не лежит в заданных значениях.\n");
    }
    return 0;
    }