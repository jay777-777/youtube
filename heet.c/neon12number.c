#include <stdio.h>
int main()
{
   int a, b = 0, d = 0;
   printf("enter the number :");
   scanf("%d", &a);
   int c = a * a;

   while (c > 0)
   {
      while (d < 0)
      {
      }

      b = b + (c % 10);
      c = c / 10;
   }
   if (b == 0)
   {
      printf("%d is neon number ", a);
   }
   else
   {
      printf("%d is not neon number", a);
   }

   return 0;
}