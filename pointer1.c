#include <stdio.h>

int main() {
    int num;
    
    
    printf("Enter an integer: ");
    scanf("%d", &num);

  
    unsigned char *bytePtr = (unsigned char*)&num;

   
    printf("The bytes of the integer in memory are:\n");
    for (int i = 0; i < sizeof(num); i++) {
        printf("Byte %d: %u\n", i + 1, bytePtr[i]);
    }

    
}
