 //kullan�c� taraf�ndan girilen bir say�n�n �ift mi yoksa tek mi oldu�unu kontrol etmeyi ��reneceksiniz.
 //You will learn to check whether a number entered by the user is even or odd.
 
#include <stdio.h>
int main() {
    int num;
    printf("Sayi Gir: ");
    scanf("%d", &num);
 
    // say� 2'ye tamamen b�l�nebiliyorsa do�rudur True if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d cift(||).", num);
    else
        printf("%d Tek(|).", num);
    
    return 0;
}
//  :)  Are you still writing code?
//  :) get some rest
// :)  and spend time with your family :) love is the most beautiful thing .
// :) one smile is enough :)
