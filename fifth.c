#include <stdio.h>

int main(){
	int number1, number2;
	
	// Harcru ogtvoxic 2 tiv
	printf("Enter the first number: ");
	scanf("%d", &number1);

	printf("Enter the second number: ");
	scanf("%d", &number2);

	// Hashvir gumary, tarberutyunn u artadryaly
	int gumar = number1 + number2;
	int tarberutyun = number1 - number2;
	int artadryal = number1 * number2;

	// Tpir ardyunqnery
	printf("Gumar: %d\n", gumar);
	printf("Tarberutyun: %d\n", tarberutyun);
	printf("Artadryal: %d\n", artadryal);

	return 0;
}
