#include<stdio.h>

///Ejercicio #3

///A01282566

///Dado un entero N, calcule el cuadrado de un numero sin utilizar *, / o librerías de potencias.

int main ()
{
  int numero = 7;
  int i = numero;
  int cuadrado = 0;
  int contar = 0;
  while (i > 0)
    {
      if ((i & 1) == 1)
	{
	  cuadrado += numero << contar;
	}
      i = i >> 1;
      contar++;
    }
  printf ("El cuadrado del número es %d", cuadrado);
  return cuadrado;
}
