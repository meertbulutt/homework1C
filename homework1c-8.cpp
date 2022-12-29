#include<stdio.h>

int main(){
	
	int kucuk=0,buyuk=0,sayi=0;
	
	printf("buyuk: ");		
	scanf("%d", &buyuk);
	
	printf("kucuk: ");		
	scanf("%d", &kucuk);
	
	printf("sayi: ");	
	scanf("%d", &sayi);
		
		while( kucuk<=buyuk){
			
			if( kucuk%sayi==0 )
				printf("\n%d", kucuk);
				kucuk++;
			if( kucuk%sayi!=0 )
				kucuk++;		
	}
	return 0;
	
}
