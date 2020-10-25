#include <locale.h> 
#include <stdio.h> 
#include <math.h> 
int main() 
{
 int x,m,f; 
 printf("Введите год - "); 
 scanf("%d", &x);  
 printf("Год "); 
 m = x % 10; 
 f = x % 12;
  switch (m) 
 { 
     case(0): 
     if ((f==6)||(f==7)||(f==8))
       printf ("Белого ");
     else 
        printf ("Белой ");
     break;   
     case(1): 
     if ((f==6)||(f==7)||(f==8))
       printf ("Белого ");
     else 
        printf ("Белой ");
     break; 
     case(2): 
     if ((f==6)||(f==7)||(f==8))
       printf ("Чёрного");
     else 
        printf ("Чёрной ");
     break; 
     case(3): 
      if ((f==6)||(f==7)||(f==8))
       printf ("Чёрного ");
     else 
        printf ("Чёрной "); 
     break; 
     case(4): 
     if ((f==6)||(f==7)||(f==8))
       printf ("Зеленого ");
     else 
        printf ("Зелёной"); 
     break; 
     case(5): 
     if ((f==6)||(f==7)||(f==8))
       printf ("Зеленого ");
     else 
        printf ("Зеленой ");
     break; 
     case(6): 
     if ((f==6)||(f==7)||(f==8))
       printf ("Красного ");
     else 
        printf ("Красной ");
     break; 
     case(7): 
     if ((f==6)||(f==7)||(f==8))
       printf ("Красного  ");
     else 
        printf ("Красной ");
     break;  
     case(8): 
     if ((f==6)||(f==7)||(f==8))
       printf ("Жёлтого ");
     else 
        printf ("Жёлтой ");
     break; 
     case(9): 
     if ((f==6)||(f==7)||(f==8))
       printf ("Жёлтого ");
     else 
        printf ("Жёлтой ");
     break; 
   } 

 switch (f)
 { 
     case(0): 
     printf("Обезьяны "); 
     break; 
     case(1): 
     printf("Курицы "); 
     break; 
     case(2): 
     printf("собаки "); 
     break; 
     case(3): 
     printf("свиньи "); 
     break; 
     case(4): 
     printf("Крысы "); 
     break; 
     case(5): 
     printf("Коровы "); 
     break; 
     case(6): 
     printf("Тигра "); 
     break; 
     case(7): 
     printf("Зайца "); 
     break; 
     case(8): 
     printf("Дракона "); 
     break; 
     case(9): 
     printf("Змем "); 
     break; 
     case(10): 
     printf("Лошади "); 
     break; 
     case(11): 
     printf("Овцы "); 
     break; 
  } 
  
 return 0; 
}