#include <stdio.h>

int main(){
	int number;
	printf("Enter your number: ");
	scanf("%d", &number);

	int qarakusi = number * number;

	printf("%d i qarakusin %d n e\n", number, qarakusi);

	return 0;
}
