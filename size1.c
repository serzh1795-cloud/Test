#include <stdio.h>

#define SIZE 100  

int main() {
    int n;
    int gumar = 0, artadryal = 1;  

    printf("grir zangvaci elementneri qanaky: ");
    scanf("%d", &n);  

    int arr[SIZE];  
    
    printf("grir zangvaci elementnery:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        gumar += arr[i];        
        artadryal *= arr[i];   
    }
    printf("elementneri gumary: %d\n", gumar);
    printf("elementneri artadryaly: %d\n", artadryal);

    

}
