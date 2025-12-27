#include <stdio.h>

int main(){
	float celsius;
	printf("Enter celsius:");
	scanf("%f", &celsius );
	float farenhayt = celsius * 9 / 5 + 32;
	printf("%f celsius = %f farenhayt\n", celsius, farenhayt);



}
