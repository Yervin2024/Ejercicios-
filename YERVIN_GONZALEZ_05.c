#include<stdio.h>
#include<conio.h>

int main()
{
    int Cp;
    int Pp=8;
    int Total;

    printf("Este es un Programa que Permite Calcular el Monto Total de Cada Venta de Panes.\n");
   
    printf("Por Favor, Introduzca la Cantidad de Panes Vendidos:");
    scanf("%d", &Cp);

    Total=Pp*Cp;

    printf("El Monto Total de Esta Venta es de %d Bs.", Total);

    return(0);
}