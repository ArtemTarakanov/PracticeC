#include <stdio.h>

int main() {
    float M; 
    float S; 
    float time; 

    printf("Введите количество данных в МБ: ");
    scanf("%f", &M);

    printf("Введите скорость передачи данных в Кбит/с: ");
    scanf("%f", &S);
    time = (M * 8000) / (S * 60);

    printf("Время, необходимое для передачи %.2f МБ данных при скорости %.2f Кбит/с: %.2f минут\n", M, S, time);

    return 0; 
}
