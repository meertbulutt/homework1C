#include<stdio.h>

int main(){
	
	int decimal;
	
	printf("ondalik sayiyi ikilik sayiya cevirmek icin sayi giriniz: ");
	scanf("%d", &decimal);	
	
	int x=1,sonuc = 0;
	
	while( decimal > 0 ){
				
		sonuc += (decimal%2)*x;
		x = x*10;	
		decimal /= 2;	
	}
	
	printf("\nSonuc: %d", sonuc);

	return 0;
}
