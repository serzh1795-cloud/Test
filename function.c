#include <stdio.h>

size_t my_strlen(const char* s);
char* my_strcpy(char *dest, const char *src);
char* my_strcat(char *dest, const char *src);
int my_strcmp(const char *s1, const char *s2);
void* my_memset(void *s, int c, size_t n);
char* my_strchr(const char *s, int c);
char* my_strrchr(const char *s, int c);
char *my_strstr(const char *haystack, const char *needle);

int main() {
    
}

size_t my_strlen(const char* s){
    size_t size = 0;
    for(int i = 0; s[i] != '\0'; ++i){
        ++size;
    }
    return size;
}

char* my_strcpy(char *dest, const char *src){
    for(int i = 0; src[i] != '\0'; ++i){
        dest[i] = src[i];
    }
    return dest;
}

char* my_strcat(char *dest, const char *src){
    char* end = dest;
    while(*end){
        ++end;
    }
    my_strcpy(end, src);
    return dest;
}

int my_strcmp(const char *s1, const char *s2){
    while(!(*s1 - *s2)){
        if(*s1 == '\0' || *s2 == '\0') break;
        ++s1;
        ++s2; 
    }
    return *s1 - *s2;
}

void* my_memset(void *s, int c, size_t n){
    char* ptr = (char*) s;
    for(int i = 0; i < n; ++i){
        ptr[i] = c;
    }
    return s;
}

char* my_strchr(const char *s, int c){
    for(int i = 0; s[i] != '\0'; ++i){
        if(s[i] == c) return (char *) s + i;
    }
    return NULL;
}

char* my_strrchr(const char *s, int c){
    char* tmp = NULL;
    for(int i = 0; s[i] != '\0'; ++i){
        if(s[i] == c) tmp = (char *)s + i;
    }
    return tmp;
}

char *my_strstr(const char *haystack, const char *needle){
    for(int i = 0; haystack[i] != '\0'; ++i){
        if(haystack[i] == needle[0]){
            char bool = 1;
            for(int j = i; needle[j - i] != '\0'; ++j){
                if(haystack[j] != needle[j - i]){
                    bool = 0;
                    break;
                }
            }
            if(bool) return (char*) haystack + i;
        } 
    }
    return NULL;
}
