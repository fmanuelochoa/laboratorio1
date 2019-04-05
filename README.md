# laboratorio1
#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_ALUMNOS 5000//el nombre de un array representa a la primer posicion del array

int getArrayInt(char* msg, char* msgError, int maximo, int minimo, int reintentos, int* resultado, int limite);
int utn_getNumero(int* pResultado,const char *mensaje,const char *mensajeError,int minimo,int maximo,int reintentos);

int main()
{
    int* pEdades;//direccion de memoria con el *(puntero)
    int bufferEdad;
    int aEdades[CANTIDAD_ALUMNOS];// array

    aEdades[100] = 22;//guardo el valor 22 en la posicion 100
    //bufferEdades = aEdades[100];//guardo lo que hay en la posicion 100
    pEdades = &aEdades[0];//direccion de memoria del primer elemento del array lo pongo en pEdades (puntero)
    //esto equivale a pEdades = aEdades me lleva a la primer posicion
    pEdades[88] = 11;//*(pEdades+88) = 11 es lo mismo quiere decir un puntero de indireccion es decir el puntero donde estaba mas 88
    bufferEdad = pEdades[188];//bufferEdad = *(pEdades+188); equivale a eso


    //puntero a char es char* porque es un string en c






    return 0;
}


int getArrayInt(char* msg, char* msgError, int maximo, int minimo, int reintentos, int* resultado, int limite)
