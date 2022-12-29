#include<stdio.h>

int main(){
	
	int sayi1 , sayi2 , c , ebob;
	
	
	printf("birinci sayiyi giriniz: ");
	scanf("%d", &sayi1);
	
	
	printf("ikinci sayiyi giriniz: ");
	scanf("%d", &sayi2);
	
	
	for( c=1 ; c<=sayi1 && c<= sayi2 ; c++ ){
		
		
		if( sayi1%c==0 && sayi2%c==0 )
			
			ebob = c;
		
	}
	
	
	printf("en buyuk ortak bolen: %d", ebob);
	
	return 0;
		
}
