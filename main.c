#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len;
    printf("Enter the size of string: ");
    scanf("%d",&len);

    char *mas = NULL;
    mas = (char *)malloc(sizeof(char)*len);
    
    printf("Enter the string: ");
    scanf("%s",mas);
    
    for(int i = 0; i < len; i++) 
    {
        printf("%c",mas[i]);
    }
    
    free(mas);
    mas = NULL;
    return 0;
}