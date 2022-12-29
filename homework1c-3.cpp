#include<stdio.h>


int main(){
	
	float Sicaklik;
	
	printf("Sicaklik(C) degeri giriniz: ");
	scanf("%f", &Sicaklik);
	
	
	if(Sicaklik<0)
		printf("sicaklik donma noktasi altindadir!");
	else
		printf("sicaklik donma noktasinin ustundedir!");
	
	
	return 0;	

}
