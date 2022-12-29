#include<stdio.h>

int main(){
	
	int num, bs=0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &num);
	
	while( num>0 ){
		
		num= num/10;
		bs++;
		
	}
	
	printf("Basamak sayisi: %d", bs);
	
	return 0;
	
}
