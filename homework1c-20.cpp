#include<stdio.h>

int main(){
	
	int x,bas_ilk,bas_son;
	
	printf("sayii giriniz: ");
	scanf("%d", &x);
	
	bas_son = x % 10;

	
	while( x> 0){
		
		bas_ilk = x % 10;
		x = x /10;
		
	}	
	
	
	printf("\nsayinin ilk basamagi: %d", bas_ilk);
	printf("\nsayinin son basamagi: %d", bas_son);


	
	
	return 0;
	
}
