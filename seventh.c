#include <stdio.h>

int main(){
        
	float laynutyun, erkarutyun;

	// Harcru ogtvoxic uxankyan laynutyunn u erkarutyuny
	printf("Grir uxankyan laynutyuny: ");
	scanf("%f", laynutyun);

	printf("Grir uxankyan erkarutyuny: ");
	scanf("%f", erkarutyun);

	// Hashvir uxankyan makeresy
	double  makeres = laynutyun * erkarutyun;

	// Tpir ardyunqnery
	printf("Makeres: %lf\n", makeres);

	return 0;
}	
