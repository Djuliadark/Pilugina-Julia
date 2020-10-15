#include<stdio.h>
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
c = (a*a)/(b*b);
p = (a*a)*(b*b);
r = (a*a)-(b*b);
s = (a*a)+(b*b);
printf (" частное = %f\n",c);
printf (" произведение = %d\n",p);
printf (" разность = %d\n",r);
printf (" сумма  = %d\n",s);
return 0; 
}