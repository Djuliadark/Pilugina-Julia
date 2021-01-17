#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
    int a[20];
    int i,i2,n;
    printf("N=");
    scanf("%i",&n);
 
    for (i=0;i<n;i++)
    {
        printf ("A[%d] = ", i+1);
        scanf ("%d",&a[i]);
    }
 
    for (i=n-1; i>=0; --i)
    {
        if (a[i]<0){
            ++n;
            for(i2=n; i2>i; --i2) a[i2]=a[i2-1];
            a[i+1]=0;
        }
    }
 
    for (i=0; i<n;++i) 
    printf(" %i= %i\n",i+1,a[i]);
 
    return 0;
}