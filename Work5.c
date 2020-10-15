#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int a,b;
int s,p,r;
float c;
printf("Ввод a:");
scanf("%d",&a);
printf("Ввод b:");
scanf("%d",&b);
c = abs(a)/abs(b);
p = abs(a)*abs(b);
r = abs(a)-abs(b);
s = abs(a)+abs(b);
printf (" частное = %f\n",c);
printf (" произведение = %d\n",p);
printf (" разность = %d\n",r);
printf (" сумма  = %d\n",s);
return 0; 
}