#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TYPE int
#define DEFAULT_SIZE 8

typedef struct Vector{
    TYPE*ptr;
    size_t size;
    size_t capacity;
}Vector;

bool constructor(Vector *vector);
bool reserve(Vector *vector, size_t size);
void resize(Vector *vector);
void clear(Vector *vector);

void push_back(Vector *vector, TYPE value);
void push_front(Vector *vector, TYPE value);
void pop_back(Vector *vector);
void pop_front(Vector *vector);




int main(){

Vector array;
constructor(&array);
printf("%zu\n", array.capacity);
printf("%zu\n", array.size);
resize(array);
printf("%zu\n", array.capacity);
printf("%zu\n", array.size);
for (int i = 0; i < 12; ++i){
resize(array);
array.ptr[i] = 10
}
printf("%d\n", array.ptr[i]);
array.size;
}

bool constructor(Vector *vector){

	vector->ptr = malloc (DEFAULT_SIZE * sizeof(TYPE));
	if(!ptr){
		perror("Malloc error: ");
		return false;
	}
	vector->capacity = DEFAULT_SIZE;
	vector->size = 0;
	return true;
}

bool reserve(Vector *vector, size * sizeof(TYPE));
 	
	vector->ptr = realloc (ptr,size * sizeof(TYPE));
	if (!ptr) {
		perror("Realloc error:");
		return falce;
	}
	vector->capacity *= 2
	return true;








}
