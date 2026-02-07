#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char *name;
    int *scores;
    int scoreCount;
};

int main() {
    struct Student *st;

  
    st = (struct Student *)malloc(sizeof(struct Student));
    if (st == NULL) {
        printf("Struct's malloc error\n");
        return 1;
    }

    
    st->name = (char *)malloc(20 * sizeof(char));
    if (st->name == NULL) {
        printf("Name's malloc error\n");
        free(st);
        return 1;
    }

    printf("enter pupil's name: ");
    scanf("%19s", st->name);


    st->scoreCount = 3;

 
    st->scores = (int *)malloc(st->scoreCount * sizeof(int));
    if (st->scores == NULL) {
        printf("Score's malloc error\n");
        free(st->name);
        free(st);
        return 1;
    }

  
    printf("enter %d mark:\n", st->scoreCount);
    for (int i = 0; i < st->scoreCount; i++) {
        scanf("%d", &st->scores[i]);
    }


    int newCount = 5;
    int *temp = (int *)realloc(st->scores, newCount * sizeof(int));

    if (temp == NULL) {
        printf("realloc error\n");
        free(st->scores);
        free(st->name);
        free(st);
        return 1;
    }

    st->scores = temp;

  
    printf("enter one more %d mark:\n", newCount - st->scoreCount);
    for (int i = st->scoreCount; i < newCount; i++) {
        scanf("%d", &st->scores[i]);
    }

    st->scoreCount = newCount;

    
    printf("\npupil's data:\n");
    printf("Name: %s\n", st->name);
    printf("marks: ");
    for (int i = 0; i < st->scoreCount; i++) {
        printf("%d ", st->scores[i]);
    }
    printf("\n");

  
    free(st->scores);
    free(st->name);
    free(st);

    return 0;
}

