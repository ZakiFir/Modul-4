#include <stdio.h>
int main(){
    int i,j, bilangan;
    printf("Batas maksimal bilangan\n");
    scanf("%d", &bilangan);
    for (i = 1; i <= bilangan; i++){
        if(i % 2 == 0){
        }
        else {
            printf("%d ", i);
        } 
    }
    printf ("\n");
    for (j = bilangan; j >= 1; j--){
        if (j % 2 != 0){
        }
        else{
            printf("%d ", j);
        }
    }
}