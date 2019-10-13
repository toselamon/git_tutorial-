#include<stdio.h>
int function( int x){

	return x*x;
}
int main(){
		int num;
	printf("Hello World!\n");
	printf("Please input number to square\n");
	
	scanf( "%d", &num);

	printf("the square of num is %i\n", function(num));
return 0;
}
