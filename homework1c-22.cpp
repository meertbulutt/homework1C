#include<stdio.h>

int main(){

	int sayi, yenisayi=0;
	
	printf("sayi giriniz: ");
	scanf("%d", &sayi);
	
	int a,b;
	
	a = sayi;
	
	while( a>0 ){ 
    	
			
			b = a%10;
			yenisayi = b+( yenisayi*10);
			a = a/10;

	} 
             
    if( sayi == yenisayi )
    	printf("Girdiginiz sayi palindrom sayidir.");
    else	
    	printf("Girdiginiz sayi palindrom sayisi degildir.");
             
             
 	
	 return 0;  
             
}
