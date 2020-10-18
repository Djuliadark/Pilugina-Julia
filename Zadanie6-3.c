#include<stdio.h>
#include<math.h>
int main()
{
int A,B,C,a,b;
printf("Начальное значение А = ");
scanf("%d",&A);
printf("Начальное значение B = ");
scanf("%d",&B);
printf("Начальное значение C = ");
scanf("%d",&C);
a = A;
b = B;
A = C;
C = b;
B = a;
printf (" Измененное значение А = %d\n", A);
printf (" Измененное значение В = %d\n", B);
printf (" Измененное значение C = %d\n", C);
return 0; 
}
