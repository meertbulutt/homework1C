#include<stdio.h>

int main(){
	
	int c, sayi, top = 0;
	
	c = 1;
	while( c<=10 ){
		
		printf("Bir sayi giriniz: ");
		scanf("%d", &sayi);
		top += sayi;
		c++;
	}
	
	printf("Toplam: %d", top);
	
	return 0;
	
}
