#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define FILA 5

int main()
{
    char **buffer;
    char buff[50];

    buffer = (char **) malloc(sizeof(char *) * FILA);

    for (int i = 0; i < FILA; i++)
    {
        printf("Ingrese el nombre:\n");
        gets(buff);
        *(buffer + i) = malloc(sizeof(char) * strlen(buff) + 1);
        strcpy(buffer[i], buff);
    }

    printf("Nombres ingresados:\n");
    for (int i = 0; i < FILA; i++)
    {
        printf("%d: %s\n", i + 1, *(buffer + i));
        free(*(buffer + i));
    }
    
    free(buffer);

    return 0;
}