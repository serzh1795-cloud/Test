#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr1;
    int *arr2 = NULL;
    int evenCount = 0;

    
    printf("Enter the first array's size: ");
    scanf("%d", &n);

  
    arr1 = (int *)malloc(n * sizeof(int));

    if (arr1 == NULL) {
        printf("memory allocation error\n");
        return 1;
    }

   
    printf("enter the elements of array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

   
    for (int i = 0; i < n; i++) {
        if (arr1[i] % 2 == 0) {

           
            int *temp = (int *)realloc(arr2, (evenCount + 1) * sizeof(int));

            if (temp == NULL) {
                printf("realloc error\n");
                free(arr1);
                free(arr2);
                return 1;
            }

            arr2 = temp;
            arr2[evenCount] = arr1[i];
            evenCount++;
        }
    }


    printf("Even numbers in array:\n");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

   
    free(arr1);
    free(arr2);
    arr1 = NULL;
    arr2 = NULL;

    return 0;
}







