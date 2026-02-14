#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct {
    int *data;
    int size;
    int capacity;
} Vector;

void insert(Vector *v, int value) {
    if (v->size >= v->capacity) {
        v->capacity *= 2;
        v->data = (int*)realloc(v->data, sizeof(int) * v->capacity);
    }

    v->data[v->size] = value;
    v->size++;
}


