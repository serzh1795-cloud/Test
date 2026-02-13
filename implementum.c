#include <stdlib.h>
#include <stdbool.h>

#define TYPE int

typedef struct {
    TYPE *data;
    size_t size;
    size_t capacity;
} Vector


bool constructor(Vector *vector) {
    if (vector == NULL)
        return false;

    vector->size = 0;
    vector->capacity = 1;

    vector->data = malloc(sizeof(TYPE) * vector->capacity);
    if (vector->data == NULL)
        return false;

    return true;
}

bool reserve(Vector *vector, size_t new_capacity) {
    if (vector == NULL)
        return false;

    if (new_capacity <= vector->capacity)
        return true;

    TYPE *new_data = malloc(sizeof(TYPE) * new_capacity);
    if (new_data == NULL)
        return false;

    for (size_t i = 0; i < vector->size; i++) {
        new_data[i] = vector->data[i];
    }

    free(vector->data);

    vector->data = new_data;
    vector->capacity = new_capacity;

    return true;
}



void resize(Vector *vector) {
    if (vector == NULL)
        return;

    size_t new_capacity = vector->capacity * 2;

    TYPE *new_data = malloc(sizeof(TYPE) * new_capacity);
    if (new_data == NULL)
        return;

    for (size_t i = 0; i < vector->size; i++) {
        new_data[i] = vector->data[i];
    }

    free(vector->data);

    vector->data = new_data;
    vector->capacity = new_capacity;
}



void clear(Vector *vector) {
    if (vector == NULL)
        return;

    vector->size = 0;
}



void push_back(Vector *vector, TYPE value) {
    if (vector == NULL)
        return;

    if (vector->size == vector->capacity) {
        resize(vector);
    }

    vector->data[vector->size] = value;
    vector->size++;
}



void push_front(Vector *vector, TYPE value) {
    if (vector == NULL)
        return;

    if (vector->size == vector->capacity) {
        resize(vector);
    }

    for (size_t i = vector->size; i > 0; i--) {
        vector->data[i] = vector->data[i - 1];
    }

    vector->data[0] = value;
    vector->size++;
}



void pop_back(Vector *vector) {
    if (vector == NULL)
        return;

    if (vector->size == 0)
        return;

    vector->size--;
}


void pop_front(Vector *vector) {
    if (vector == NULL)
        return;

    if (vector->size == 0)
        return;

    for (size_t i = 0; i < vector->size - 1; i++) {
        vector->data[i] = vector->data[i + 1];
    }

    vector->size--;
}

