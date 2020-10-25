#include <stdio.h>
#include <math.h>
int main()
{
    int s,k,n,p;
    printf ("Введите процент P ");
    scanf ("%i", &p);
    s=1000;
    k=0;
    while (s<=1100)
    {
        k+=1;
        s=s+s*p/100;}
    printf ("количество месяцев К = %i \n",k);
    printf ("итоговый размер вклада = %i",s);
  return 0;
}