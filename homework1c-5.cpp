#include<stdio.h>

int main(){
	
	
	float feet=0, cm=0;
	
	printf("uzunluk degeri giriniz(feet): ");
	scanf("%f", &feet);
	
	cm = feet*30.48;
	
	printf("Uzunluk(cm): %.4f", cm);
	
	return 0;
	
	
}

