#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ANIOS 5
#define MESES 12

void cargarMatriz(int m[][MESES], int anio, int mes);
void mostrarMatriz(int m[][MESES], int anio, int mes);
void promedio(int m[][MESES], int anio, int mes);
void minMax(int m[][MESES], int anio, int mes);

int main()
{
    srand(time(NULL));
    int matriz[ANIOS][MESES];
    cargarMatriz(matriz, ANIOS, MESES);
    mostrarMatriz(matriz, ANIOS, MESES);
    promedio(matriz, ANIOS, MESES);
    minMax(matriz, ANIOS, MESES);
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

void promedio(int m[][MESES], int anio, int mes)
{
    int sum = 0;
    float prom;
    for (int i = 0; i < anio; i++)
    {
        for (int j = 0; j < mes; j++)
        {
            sum += m[i][j];
        }
        prom = sum / (float)mes;
        printf("el promedio de produccion del anio %d: %.2f\n", i + 1, prom);
        sum = 0;
    }
}

void minMax(int m[][MESES], int anio, int mes)
{
    int min = m[0][0];
    int max = m[0][0];
    int max_anio = 0, max_mes = 0;
    int min_anio = 0, min_mes = 0;
    for (int i = 0; i < anio; i++)
    {
        for (int j = 0; j < mes; j++)
        {
            if (m[i][j] > max)
            {
                max = m[i][j];
                max_anio = i + 1;
                max_mes = j + 1;
            }
            
            if(m[i][j] < min)
            {
                min = m[i][j];
                min_anio = i + 1;
                min_mes = j + 1;
            }
        }
    }
    printf("el maximo se dio en el anio %d y mes %d y su produccion: %d\n",max_anio, max_mes ,max);
    printf("el minimo se dio en el anio %d y mes %d y su produccion: %d\n",min_anio, min_mes ,min);
}