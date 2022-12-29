#include<stdio.h>

int main(){
	
	int x, c, carpim;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &x);
	
	c = 1;
	while( c<=10 ){
		
		carpim = c * x;
		printf("%d\n", carpim);
		c++;
		
	}
	
	return 0;
	
}
