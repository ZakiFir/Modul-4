#include <stdio.h>
int main(){
    float prog, bil1, bil2;
    while (1){
    printf("\tPilih program\n");
    printf("\t1. Penjumlahan\n");
    printf("\t2. Pengurangan\n");
    printf("\t3. Perkalian\n");
    printf("\t4. Pembagian\n");
    printf("\t5. Exit\n");
    printf("Masukkan Pilihan: ");
    scanf("%f", &prog);
    if(prog > 5){
        printf("Input anda salah, silahkan coba lagi\n");
        continue;
    }else if(prog == 5){
        printf("Terimakasih, telah menggunakan kalkulator Mohammad Zaki Firmansah\n");
        break;
    }
    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &bil1);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &bil2);
    if(prog == 1){
        printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", bil1, bil2, bil1+bil2);
    }else if(prog == 2){
        printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", bil1, bil2, bil1-bil2);
    }else if(prog == 3){
        printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", bil1, bil2, bil1*bil2);
    }else if(prog == 4){
        printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", bil1, bil2, bil1/bil2);
    }
    }
}