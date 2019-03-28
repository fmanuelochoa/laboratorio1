#include <stdio.h>
#include <stdlib.h>

int isValidInt(int numero, int maximo,int minimo);
int getInt(char *mensaje,char *mensajeError,int minimo,int maximo,int reintento,int *resultado);


int main()
{
    int numeroIngresado;
    getInt("ingrese","error",0,50,2,&numeroIngresado);
    printf("%d",&numeroIngresado);
    return 0;
}

int isValidInt(int numero,int maximo,int minimo)
{
    if(numero >= minimo && numero <= maximo)
    {
        return 1;
    }

        return 0;

}

int getInt(char *mensaje,char *mensajeError,int minimo,int maximo,int reintento,int *resultado)
{
    int buffer;
    int i;
    int retorno=-1;
    if(mensaje != NULL && mensajeError != NULL && resultado != NULL && maximo>=minimo && reintento>=0)
    {
        for(i=0;i<=reintento;i++)
        {
            printf("%s" ,mensaje);
            scanf("%d", &buffer);
            if(isValidInt(buffer,minimo,maximo))
            {
                *resultado=buffer;
                return 0;
                break;
            }else
            {
                printf("%s",mensajeError);
            }
        }
        retorno = 0;

    }
    return retorno;
}

