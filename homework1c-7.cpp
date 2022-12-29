#include<stdio.h>

int main(){
	
	int top=0,kucuk,buyuk;
	
	printf("kucuk: ");
	scanf("%d", &kucuk);
	printf("buyuk: ");
	scanf("%d", &buyuk);
	
	while( kucuk<=buyuk){
			top += kucuk;
			kucuk++;
	}
	
	printf("%d", top);
	
	return 0;
	
}

