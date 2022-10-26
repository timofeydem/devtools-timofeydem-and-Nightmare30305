#include <stdio.h>
#include <string.h>
int main(){
    char first[11];
    char second[11];
    int n;
    printf("Enter first string:\n");
    scanf("%s", &first);


    int size_of_first = strlen(first);
    printf("Enter second string:\n");
    scanf("%s", &second);
    int size_of_second = strlen(second);
    printf("Enter number of symbols:\n");
    scanf("%d", &n);
    char *third = strncat(first, second, n);

    printf("First String + Second String[%d]: %s\n",n, third);

    char * p = strrchr(first,'a');
    printf ("Last occurence of 'a' found at %d \n", p - first + 1);
    /* Он печатает все символы, которые есть в обеих строках. */
    for ( p = first; *p; ++p )
        if ( strchr(second, *p) )
            printf("Result: %c\n", *p);
    return 0;

}