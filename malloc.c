#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int sum = 0;

    printf("Enter the array size: ");
    scanf("%d", &n);

    
    int *arr = (int *)malloc(n * sizeof(int));

  
    if (arr == NULL) {
        printf("memory allocation succeded\n");
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        printf("Enter %d-st element: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

   
    printf("sum of elements = %d\n", sum);

   
    free(arr);
    arr = NULL;

    return 0;
}
