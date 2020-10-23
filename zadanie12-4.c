#include <locale.h> 
#include <stdio.h> 
#include <math.h> 
int main() 
{
 int x,k1,k2,k3; 
 printf("Введите число - "); 
 scanf("%d", &x); 
 k1 = x / 100;
 k2 = x % 100 / 10; 
 k3 = x % 10; 
  switch (k1) 
 { 
     case(1): 
     printf("Сто "); 
     break;   
     case(2): 
     printf("Двести "); 
     break; 
     case(3): 
      printf("Триста "); 
     break; 
     case(4): 
     printf("Четыреста "); 
     break; 
     case(5): 
     printf("Пятьсот "); 
     break; 
     case(6): 
     printf("Шестьсот "); 
     break; 
     case(7): 
     printf("Семьсот "); 
     break;  
     case(8): 
     printf("Восемьсот "); 
     break; 
     case(9): 
     printf("Девятьсот "); 
     break; 
   } 
 if ((k2==1) && (k3==0))
 { 
     printf("Десять "); 
  } 
 switch (k2) 
 { 
     case(2): 
     printf("Двадцать "); 
     break; 
     case(3): 
     printf("Тридцать "); 
     break; 
     case(4): 
     printf("Сорок "); 
     break; 
     case(5): 
     printf("Пятьдесят "); 
     break; 
     case(6): 
     printf("Шестьдесят "); 
     break; 
     case(7): 
     printf("Семьдесят "); 
     break; 
     case(8): 
     printf("Восемьдесят "); 
     break; 
     case(9): 
     printf("Девяносто "); 
     break; 
  } 
  
 switch (k3)
 { 
     case(1): 
     printf("Один"); 
     break; 
     case(2): 
     printf("Два"); 
     break; 
     case(3): 
     printf("Три"); 
     break; 
     case(4): 
     printf("Четыре"); 
     break; 
     case(5): 
     printf("Пять"); 
     break; 
     case(6): 
     printf("Шесть"); 
     break; 
     case(7): 
     printf("Семь"); 
     break; 
     case(8): 
     printf("Восемь"); 
     break; 
     case(9): 
     printf("Девять"); 
     break; 
   } 
 return 0; 
}