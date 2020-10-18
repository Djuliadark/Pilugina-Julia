#include<stdio.h>
#include<math.h>
int main()
{
int A,B,a;
printf("Начальное значение А = ");
scanf("%d",&A);
printf("Начальное значение B = ");
scanf("%d",&B);
a = A;
A = B;
B = a;
printf (" Измененное значение А = %d\n", A);
printf (" Измененное значение В = %d\n", B);
return 0; 
}