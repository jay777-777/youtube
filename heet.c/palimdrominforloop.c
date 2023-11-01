#include <stdio.h>
int main()
{
   int n, c, s = 0, r;
   printf("enter the number :");
   scanf("%d", &n);

   c = n;

   for (; n != 0;)
   {
      r = n % 10;
      s = r + (s * 10);
      n = n / 10;
   }
   if (c == s)
   {
      printf("palindrom number");
   }
   else
   {
      printf("not palindrom number");
   }

   return 0;
}