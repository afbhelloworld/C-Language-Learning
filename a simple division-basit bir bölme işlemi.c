 //bir tamsay� ba�ka bir tam say�ya b�l�nd���nde b�l�m� ve kalan� bulmay� ��reneceksiniz.
 //You will learn to find the quotient and remainder when an integer is divided by another integer.
 
#include <stdio.h>
int main() {
    int bolunen, bolen, bolum, kalan;
    printf("Bolunen: ");
    scanf("%d", &bolunen);
    printf("Bolen: ");
    scanf("%d", &bolen);
 
    // hesaplama b�l�m� - Computes quotient
    bolum = bolunen / bolen;
 
    // hesaplma kalan� - Computes remainder
    kalan = bolunen % bolen;
 
    printf("B�l�m(division) = %d\n", bolum);
    printf("Kalan(remainder)= %d", kalan);
    return 0;
}
