#include <stdio.h>

int main(){
	
	int k = 1;//pointer sayesinde 1 say�s�n�n ram'deki yerini buluyor . (16'l�k sistemde)(62fe14)
	int *p;
	
	p = &k;
	printf("%x",p);//pointer'�n ram'deki yerini buluyoruz.E�er o yerde hangi de�er var g�rmek istersek *p yaz�yoruz.
	
	
	
	return 0;
}
