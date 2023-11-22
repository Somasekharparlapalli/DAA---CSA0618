#include<stdio.h>
int main()
{
   int a=0, b=1, n, c, sum=0;

   printf("Enter  a n: ");
   scanf("%d",&n);

   printf("The fibonacci series is: \t");
   while( a <= n )
   {
      printf("%d\t",a);
      sum += a;
      c = a + b;
      a = b;
      b = c;
   }

   printf("\nTheir sum is = %d", sum);

   return 0;
}