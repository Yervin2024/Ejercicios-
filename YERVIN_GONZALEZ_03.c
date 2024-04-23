#include<stdio.h>
#include<conio.h>

int main()
{
    float Ch;
    float Ckm;

    printf("Este Programa está Basado en el Cálculo de los Kilómetros que Recorren los Antílopes Según las Horas Proporcionadas por el Usuario.\n");

    printf("Ingrese la Cantidad de Horas Durante las que el Animal Estuvo en Movimiento:");
    scanf("%f", &Ch);

    Ckm=Ch*11.25;

    printf("La Cantidad de Kilómetros Recorridos por el Antílope es de %.2f km.", Ckm);

    return 0;
}