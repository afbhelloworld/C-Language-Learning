 //C programlamas�nda ikinci dereceden bir denklemin k�klerini bulmay� ��reneceksiniz.
 //You will learn to find the roots of a quadratic equation in C programming.
 
 //If greater than 0, the roots are real and different.   -  0�dan b�y�kse, k�kler ger�ek ve farkl�d�r.
 //If it is equal to 0, the roots are real and equal.    -   0�a e�itse, k�kler ger�ek ve e�ittir.
//If it is less than 0, the roots are complex and different.   -  0�dan k���kse, k�kler karma��k ve farkl�d�r.
                         //we have three situations to solve*****
#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, kok1, kok2, realPart, imagPart;
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
 
    discriminant = b * b - 4 * a * c;
 
    // ger�ek ve farkl� k�kler i�in durum  - condition for real and different roots
    if (discriminant > 0) {
        kok1 = (-b + sqrt(discriminant)) / (2 * a);
        kok2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", kok1, kok2);
    }
 
    // ger�ek ve e�it k�kler i�in ko�ul - condition for real and equal roots
    else if (discriminant == 0) {
        kok1 = kok2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", kok1);
    }
 
    // e�er k�kler ger�ek de�ilse - if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("k�k1 = %.2lf+%.2lfi ve k�k2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
 
    return 0;
}
