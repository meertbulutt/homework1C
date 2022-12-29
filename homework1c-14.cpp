#include<stdio.h>

int main(){
	
	
	int x;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &x);
	
	while( x>=1){
		printf("%d\n", x);
		x--;
	}
	
	return 0;
}
