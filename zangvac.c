#include <stdio.h>

#define SIZE 100  

int main() {
    int n;
    
    printf("grir zandvaci elementneri qanaky: ");
    scanf("%d", &n);  

    int arr[SIZE];  

   
    printf("grir zangvaci elementnery:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("tarery hakarak hertakanutyamb en:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

  
}
