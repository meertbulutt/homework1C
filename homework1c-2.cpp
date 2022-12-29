#include<stdio.h>

int main(){
	
	int x;
	
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &x);
	
	if(x%2==0)
		
		printf("Girdiginiz sayi cifttir.");
	else
		printf("Girdiginiz sayi tektir.");
	
		
	return 0;
		
}
