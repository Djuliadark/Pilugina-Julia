#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
    int a[20];
    int i,i1,i2,n,min,max;
    printf ("N : ");
    scanf ("%d", &n);

    for (i=0;i<n;i++)
    {
        printf ("A[%d] = ", i+1);
        scanf ("%d",&a[i]);
    }
    min=a[1];
    max=a[1];

    for (i=0;i<n;i++)
    {
    if (a[i]<min){
      min=a[i];
      i1=i;
     }
    }

    for (i=n;i<=i1;--i)
    {
    a[i]=a[i-1];
    a[i1]=0;
    }

    for (i=0;i<n;i++)
    {
    if (a[i]>max)
    {
      max=a[i];
      i2=i;
     }
    }

    for (i=n;i<=i2+2;--i)
    {
    a[i]=a[i-1];
    a[i2+1]=0;
    }

    printf("Массив - 2\n");
    for (i=0; i<n;++i) 
    printf("%i: %i\n",i+1,a[i]);
 
    return 0;
}