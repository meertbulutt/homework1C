#include<stdio.h>

int main(){
	
	int sayac, sayi, faktoriyel = 1;

	printf("sayi giriniz: ");
	scanf("%d", &sayi);
	
	sayac = 1;	
	while( sayac<=sayi){
		
		faktoriyel = sayac*faktoriyel;
		sayac++;
	}
	printf("Girdiginiz sayinin faktoriyeli: %d", faktoriyel);
	
	return 0;
	
}
