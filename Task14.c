#include <stdio.h>

//На Луне сила тяжести составляет 1/6 от земной. Напишите программу, которая принимает массу объекта (int) и вычисляет его вес на Луне (float). 

int main(){
    int object;

    printf("Введите массу объекта: ");
    scanf("%d", &object);

    float moon_weight;
    moon_weight = (float) object/6;
    printf("Вес объекта на Луне будет составлять %f.\n", moon_weight);
    return 0;
}