#include<stdio.h>

int main(){
	
	int c;
	
	c = 1000;
	while( c<2000 ){
		if( c % 2 == 0 ){
	
			printf("\n%d", c);
			c++;
		}
		else{
			c++;
		}
	}
	
	printf("\n");
	
	return 0;
	
}
