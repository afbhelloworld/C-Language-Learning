#include <stdio.h>

int main() {
	int sayi[5] = {1,2,3,4,5};
      
      for(int i = 0; i<5; i++) {
      	printf("%x ", &sayi[i]);//&sayi[i]
	  }//sizeof bellekte nekadar yer kaplad���n� yaz�yor byte
     
	return 0;

}
