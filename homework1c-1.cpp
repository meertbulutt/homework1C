#include<stdio.h>

int main(){
	
	float yaricap, pi, alan;
	
	pi = 3.14;
	
	printf("Yaricap giriniz: ");
	scanf("%f", &yaricap);
	
	alan = yaricap*pi*yaricap;
	
	printf("Alan: %.4f", alan);
	
	return 0;
	
}
