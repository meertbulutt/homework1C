#include<stdio.h>

int main(){
	
	int buyuk,kucuk;
	printf("buyuk: ");
	scanf("%d", &buyuk);
	printf("kucuk: ");
	scanf("%d", &kucuk);
	
	while( kucuk<=buyuk ){
		printf("\n%d", kucuk);
		kucuk++;
	}
	
	return 0;
	
}
