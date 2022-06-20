#include <stdio.h>
int main()
{
   int n, t, sum = 0, remainder,reverse;

   printf("Enter an integer\n");
   scanf("%d", &n);

   t = n;

   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }

   printf("Sum of digits of %d = %d\n", n, sum);

   while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);

   return 0;
}
