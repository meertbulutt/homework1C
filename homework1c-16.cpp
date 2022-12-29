#include<stdio.h>

int main(){
	
	double c,top=0,sayi;
	
	printf("Ikinin kati bir sayi giriniz: ");
	scanf("%lf", &sayi);
	
	for(c = 2 ;c<= sayi ;c=c+2){
		
		top= top + ( 1/c );
		
	}
	
	printf("\nToplam : %lf ", top);
	
	

	return 0;
	
}
