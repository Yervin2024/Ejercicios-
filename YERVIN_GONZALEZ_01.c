#include<stdio.h>
#include<conio.h>

int main()
{
    float Ch;
    float Ckm;

    printf("Este es un Programa Para Calcular la Cantidad de Kilómetros que Recorren los Atúnes en Función de la Cantidad de Horas Proporcionadas por el Usuario.\n");
    
    printf("Por Favor, Introduzca la Cantidad de Horas que ha Nadado el Pez:");
    scanf("%f", &Ch);

    Ckm=Ch*24;

    printf("La Cantidad de Kilómetros Recorridos por el Atún es de %.2f km.", Ckm);

    return 0;
}