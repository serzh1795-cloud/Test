#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define TYPE int
#define DEFAULT_SIZE 0

typedef struct Vector{
	TYPE *ptr;
	size_t size;
	size_t capacity
