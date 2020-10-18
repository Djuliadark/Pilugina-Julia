#include<stdio.h>
#include<math.h>
int main()
{
int x,y;
printf(" x = ");
scanf("%d",&x);
y = 4*(pow(x-3,6)) - 7*(pow(x-3,3)) + 2;
printf (" y = %d\n", y);
return 0; 
}
