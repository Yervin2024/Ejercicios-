#include<stdio.h>
#include<conio.h>

int main()
{
    float Ch;
    float Ckm;

    printf("Este es un Programa Para Calcular la Cantidad de Kilómetros que Recorren los Pingüinos en Función de la Cantidad de Horas Proporcionadas por el Usuario.\n");

    printf("Ingrese la Cantidad de Horas que ha Nadado el Ave:");
    scanf("%f", &Ch);

    Ckm=Ch*40;

    printf("La Cantidad de Kilómetros Recorridos por el Pingüino es de %.2f km.", Ckm);

    return 0;
}