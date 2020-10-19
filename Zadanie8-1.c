#include<stdio.h>
#include<math.h>
int main()
{
    int A;
    float B;
    printf ("размер файла в байтах = ");
    scanf ("%d", &A);
    B = A/1024;
    printf ("размер файла в Килобайтах = %.2f", ceil(B));
    return 0;
} 