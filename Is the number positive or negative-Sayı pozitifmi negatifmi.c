 //You will learn to check whether a number is negative or positive.
 //bir say�n�n negatif mi yoksa pozitif mi oldu�unu kontrol etmeyi ��reneceksiniz.
 
#include <stdio.h>
int main() {
    double num;
    printf("Sayi: ");
    scanf("%lf", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("0 girdiniz..");
        else
            printf("Negatif sayi girdiniz(you entered a negative number)..");
    } else
        printf("Pozitif sayi girdiniz(you entered a positive number)...");
    return 0;
}
