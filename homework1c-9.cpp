#include<stdio.h>

int main(){
	
	int A,B,C;
	
	printf("birinci sayiyi giriniz: ");
	scanf("%d", &A);
	
	printf("ikinci sayiyi giriniz: ");
	scanf("%d", &B);
	
	printf("ucuncu sayiyi giriniz: ");
	scanf("%d", &C);
	
	if( A>B && A>C )
		printf("%d En buyuk sayidir", A);
	if( A<B && B>C )
		printf("%d En buyuk sayidir", B);
	if( A<C && B<C )
		printf("%d En buyuk sayidir", C);	
	
	return 0;
	
}
