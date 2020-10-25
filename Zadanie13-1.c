#include <locale.h> 
#include <stdio.h> 
#include <math.h> 
int main() 
{ 
 float n,s;
 printf("Введите стоимомть за 1 кг ");
 scanf("%f", &n);
 float i;
 for (i=0.1; i<1.1; i+=0.1)
  {
    s = n*i;
    printf ("%.1f кг  = %.2f \n",i, s);
  }
 return 0; 
}