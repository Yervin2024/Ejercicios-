#include<stdio.h>
#include<conio.h>

int main()
{
    int Np;
    float H;

    printf("Este Programa Permitirá Calcular la Cantidad de Kilogramos de Harina Requerida Para Hacer Cualquier Cantidad de Pasteles.\n");

    printf("Introduzca la Cantidad de Pasteles a Elaborar:");
    scanf("%d", &Np);

    H=0.03*Np;

    printf("La Cantidad de Harina Requierida Para Hacer esa Cantidad de Pasteles es de %.2f Kilogramos.", H);

    return(0);
}