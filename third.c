#include <stdio.h>

int main(){
	int years;
	int days;

	printf("Enter your age: ");
	scanf("%d" , &years);
	
	days = years * 365;

	printf("%d years = %d days\n", years, days);	

	return 0;
}

