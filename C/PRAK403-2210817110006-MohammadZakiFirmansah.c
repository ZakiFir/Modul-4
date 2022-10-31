#include <stdio.h>
int main() {
    int ak1, ak2, i;
    scanf("%d %d", &ak1, &ak2);
    if(ak1 < ak2){
        for(i = ak1; i<= ak2; ak1++,ak2--){
            printf("%d ",ak1);
            printf("%d ",ak2);
            if(i < ak2){
                printf(" - ");
            }
        }
    }else if (ak1 > ak2){
        for(i = ak2; i <= ak1; ak1--,ak2++){
            printf("%d ",ak1);
            printf("%d ",ak2);
            if(i < ak1){
                printf(" - ");
            }
        }
    }
}