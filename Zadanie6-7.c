#include<stdio.h>
#include<math.h>
int main()
{
int A,a,b,y;
printf("значение А = ");
scanf("%d",&A);
a = pow(A,5);
b = a;
y = b * a * A * A * A * A * A;
printf (" y = %d\n", y);
return 0; 
}
