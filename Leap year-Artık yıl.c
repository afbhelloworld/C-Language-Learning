 //kullan�c� taraf�ndan girilen y�l�n art�k y�l olup olmad���n� kontrol etmeyi ��reneceksiniz.
 //you will learn to check if the year entered by the user is a leap year.
 
//1999 is not a leap year
//2000 is a leap year
//2004 is a leap year

#include <stdio.h>
int main() {
   int yil;
   printf("Yil Girin(please enter a year): ");
   scanf("%d", &yil);
 
 
   if (yil % 400 == 0) {
      printf("%d is artik yil(leap year).", yil);
   }
 
   else if (yil % 100 == 0) {
      printf("%d artik yil degil(not a leap year).", yil);
   }
 
   else if (yil % 4 == 0) {
      printf("%d artik yil(leap year).", yil);
   }
 
   else {
      printf("%d art�k y�l de�il(not a leap year).", yil);
   }
 
   return 0;
}
//  :)  Are you still writing code?
//  :) get some rest
// :)  and spend time with your family :) love is the most beautiful thing .
// :) one smile is enough :)
