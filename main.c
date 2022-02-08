#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int len;
    printf("Enter the size of string: ");
    scanf("%d",&len);

    char *mas = NULL;
    mas = malloc(sizeof(char)*len);
    
    printf("Enter the string: ");
    gets(mas);
    

    for(int i = 0; i < len; i++) 
    {
        if(isalpha(mas[i]))
        {
            printf("Letter [i: %d]\n", i);
        }
        else 
        {
            if(ispunct(mas[i])) {
               printf("Symbol [i: %d]\n", i); 
            }
            else 
            {
                printf("NULL [i: %d]\n", i);
            }
        }
    }
    
    free(mas);
    mas = NULL;
    return 0;
}