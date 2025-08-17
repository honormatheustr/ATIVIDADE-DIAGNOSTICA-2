#include<stdio.h>


int main(){
	
	float celsius;
	float fahrenheit;
	
	
	printf("Informe a temperatura em graus celsius:");
	
	scanf("%f",& celsius);
	
	fahrenheit=1.8*celsius+32;
	
	printf("O valor de fahrenheit: %f", fahrenheit);
	
	
	return 0;
}