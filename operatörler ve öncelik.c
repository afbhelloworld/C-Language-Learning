#include <stdio.h>

int main() {
	
	int a = 6;
	int b = 7;
	
	printf("%d\n", a+++--b);//++a oldu�unda i�lemi hemen yapar ama a++ oldu�unda i�lemi daha sonra yapar.
	printf("%d\n", a+b);
	//a+++--b oldu�unda ortadaki + iki i�lemin toplam�n� kasteder .
	
	return 0;//say�sal operat�rler ve mant�ksal operat�rler ara�t�r sorumlusun
}
