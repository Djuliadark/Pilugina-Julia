#include <stdio.h>
#include <math.h>
int main()
{
    int s,k,n;
    printf ("Введите число N ");
    scanf ("%i", &n);
    s=1;
    k=1;
    while ((s+k+1)<n)
    {
     k+=1;
     s=s+k;
    }
    printf ("минимальное К = %i \n",k);
    printf ("Сумма  = %i",s);
  return 0;
}