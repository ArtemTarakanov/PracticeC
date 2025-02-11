#include <stdio.h>

//Передача сообщения на Землю занимает T секунд (double).
//Напишите программу, которая принимает T и выводит время в минутах и секундах (например, 75.5 секунд → 1 минута 15.5 секунд). 

int main(){
    double T;
    printf("Введите время в секундах: ");
    scanf("%lf", &T);

    int minutes = T/60;
    double seconds = T - (minutes * 60);

     printf("Время составляет %d минут %.1f секунд\n", minutes, seconds);
    return 0;
}