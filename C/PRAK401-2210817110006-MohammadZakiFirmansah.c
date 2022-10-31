#include <stdio.h>
int main(){
    int i, bilangan;
    char simbol;
    printf("Masukkan bilangan dan simbol\n");
    scanf("%d %c",&bilangan, &simbol);
    for (i = 1; i <= 50; i++){
        if (i % bilangan == 0){
            printf("%c ", simbol);
        }
        else {
            printf ("%d ", i);
        }
    }
}