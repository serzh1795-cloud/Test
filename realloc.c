#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

   
    int size = 5;

  
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("malloc error\n");
        return 1;
    }

  
    printf("enter %d element:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

  
    int newSize = 10;

   
    int *temp = (int *)realloc(arr, newSize * sizeof(int));

    if (temp == NULL) {
        printf("realloc error\n");
        free(arr); 
        return 1;
    }
    arr = temp;

 
    printf("enter one time more %d element:\n", newSize - size);
    for (i = size; i < newSize; i++) {
        scanf("%d", &arr[i]);
    }

  
    printf("All array\n");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    free(arr);
    arr = NULL;

    return 0;
}
