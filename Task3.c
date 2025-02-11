#include <stdio.h>

int main(){
    char symb;
    printf("Введите символ: ");
    scanf(" %c", &symb);

    if (symb>='A' && symb<='Z'){
    printf("Символ входит в диапазон.\n");

    } else{
        printf("Символ не входит в диапазон.\n");
    }
    return 0;
}