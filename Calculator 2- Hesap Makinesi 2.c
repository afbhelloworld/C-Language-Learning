//In this example, you will learn the C program that performs the arithmetic operation according to the operation type -
//( + , � , * , / ) that the user selects and the numbers entered by the user.
//Bu �rnekte kullan�c�n�n se�ece�i i�lem t�r�ne g�re -
//( + , � , * , / ) ve kullan�c�n�n girdi�i say�lara g�re aritmetiksel i�lemi ger�ekle�tiren C program�n� ��reneceksiniz.

#include <stdio.h>
int main() {
    char operator;
    double sayi1, sayi2;
    printf("Yapmak istediginiz islem(please select a transaction) (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Sayi(number)1: ");
    scanf("%lf", &sayi1);
    printf("Sayi(number)2: ");
    scanf("%lf", &sayi2);
 
    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", sayi1, sayi2, sayi1 + sayi2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", sayi1, sayi2, sayi1 - sayi2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", sayi1, sayi2, sayi1 * sayi2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", sayi1, sayi2, sayi1 / sayi2);
        break;
    default:
        printf("Yanl�� operat�r se�imi(false operator)!!!");
    }
 
    return 0;
}
//  :)  Are you still writing code?
//  :) get some rest
// :)  and spend time with your family :) love is the most beautiful thing .
// :) one smile is enough :)
 
