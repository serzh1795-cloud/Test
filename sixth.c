#include <stdio.h>

int main() {
	double tarekanAshxatavarc;

	// Harcru tarekan ashxatavarcy
	printf("Asa qo tarekan ekamuty: ");
	scanf("%lf", &tarekanAshxatavarc);

	// Hashvir amsakan ashxatavarcy
	double amsakanAshxatavarc = tarekanAshxatavarc / 12;

	// Tpir ardyunqy
	printf("Qo amsekan ashxatavarcn e: %.2lf\n", amsakanAshxatavarc);

	return 0;
}
