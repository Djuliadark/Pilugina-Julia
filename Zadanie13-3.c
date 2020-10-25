#include <locale.h> 
#include <stdio.h> 
#include <math.h> 
int main() 
{ 
  int n;
 printf("Введите число N ");
 scanf ("%i", &n);
 float q=1;
 int i;
  for  (i =3; i<=(2*n-1); i+= 2)
    {q = q + i;
 
    printf("сумма равна  = %.2f \n ",q);
    }
 printf("квадрат = %.2f \n ",q);
    return 0;
}