#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ANIOS 5
#define MESES 12

void cargarMatriz(int m[][MESES], int anio, int mes);
void mostrarMatriz(int m[][MESES], int anio, int mes);

int main()
{
    srand(time(NULL));
    int matriz[ANIOS][MESES];
    cargarMatriz(matriz, ANIOS, MESES);
    mostrarMatriz(matriz, ANIOS, MESES);
    return 0;
}

void cargarMatriz(int m[][MESES], int anio, int mes)
{
    for (int i = 0; i < anio; i++)
    {
        for (int j = 0; j < mes; j++)
        {
            m[i][j] = rand() % (50000 - 10000 + 1) + 10000;
        }
    }
}

void mostrarMatriz(int m[][MESES], int anio, int mes)
{
    for (int i = 0; i < anio; i++)
    {
        for (int j = 0; j < mes; j++)
        {
            printf("la produccion del anio %d y el mes %d: %d\n", i + 1, j + 1, m[i][j]);
        }
    }
}