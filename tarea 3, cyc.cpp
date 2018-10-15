#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main (void)
{
    int a;
    int cuadrado;
    int cubo;
    
    printf("introduce un numero: ");
    scanf("%d", &a);
    if( a % 2==0)
    {
    printf("\n es par");
    cuadrado=a*a;
    printf("\n a al cuadrado es: %d", cuadrado);
    }
    else
    {
    printf("\n es impar");
    cubo=a*a*a;
    printf("\n a al cubo es: %d", cubo);
    }
      getch ();
      return 0;
}
