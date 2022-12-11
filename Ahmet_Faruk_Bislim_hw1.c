#include <stdio.h>
int main() {
    // odev icin son tarih: 09.12.2022 23:59
    // main fonksiyonunda degisiklik yapmayin!
    // guncelleme: 07.12.2022 18:00
    int puan = 10; // odevi gonderen herkes 10 puan alacak.
    if (ebob1(25, 90) == 5) puan += 10;
    if (ebob1(7, 200) == 1) puan += 10;
    if (ebob1(2, 256) == 2) puan += 10;
    if (ebob1(24, 39) == 3) puan += 10;
    if (ebob1(1827, 432) == 9) puan += 10;
    if (ebob1(16, 0) == 16) puan += 5;
    if (ebob1(0, 7) == 7) puan += 5;
    
    int arrayA[] = {30, 16, 27};
    int arrayB[] = {450, 200, 120, 100};
    int arrayC[] = {21, 45, 60, 72, 90};
    if (ebob2(arrayA, 3) == 1) puan += 10;
    if (ebob2(arrayB, 4) == 10) puan += 10;
    if (ebob2(arrayC, 5) == 3) puan += 10;
    
    printf("puan: %d", puan);
    return 0;
}

// verilen iki sayinin en buyuk ortak bolenini hesaplar
int ebob1(int num1, int num2) {
  if (num1 == 0) {//e�er birinci say� 0 ise ebob 2. say�d�r.
    return num2;
  }

  while (num2 != 0) {//e�er de�ilse d�ng�ye sokuyorum .
    if (num1 > num2) {
      num1 = num1 - num2;
      /*5 ve 6 say�s�n� �rnekliyeyim 6 b�y�kt�r be�ten 6-5 e�ittir 1 o zaman ebob 1 dir.de�ilse tam tersi
      */
    }
    else {
      num2 = num2 - num1;
    }
  }

  return num1;
}

// verilen dizideki sayilarin en buyuk ortak bolenini hesaplar
int ebob2(int numbers[],int n)
{
   
    int ebob = 1, Ebobdizi = 1,etken=0;
    /* �ncelikle sabit say�n�n yani n nin 2 den kalan�nn�n 0 olup olmad���na g�re 2 if blo�u a��yorum ona g�re dizideki elemalar�n ebob unu hesaplat�yorum
    */
   
   if(n % 2 != 0)//1
   {
       etken = n / 2 -1;
        for(int i = 0;i <= n/2+etken; i++)
        {   
            if(i==0) Ebobdizi= ebob1(numbers[i],numbers[i+1]);
            if(i != 0) Ebobdizi = ebob1(Ebobdizi,numbers[i+1]);
            if(i == n/2+etken) ebob = Ebobdizi;
         }
   }
   
   
   
   if(n % 2 == 0)//2
   {
       etken = n/2-1;
       for(int i = 0;i<n/2 + etken;i++)
       {
           if(i==0) Ebobdizi = ebob1(numbers[i],numbers[i+1]);//dizideki elemanlar�n eboblar�n� hesapl�yorum
           if(i != 0) Ebobdizi = ebob1(Ebobdizi,numbers[i+1]);
           if(i == n/2+(etken-1)) ebob = Ebobdizi;
       }
   }

    return ebob;//tekar ebob de�i�kenimi d�nd�r�p sonucu yolluyorum
}
