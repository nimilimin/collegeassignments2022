#include <stdio.h>

int fact(int num)
 {
   int factorial;
   
   for(factorial = 1; num > 1; num--)
      factorial *= num;
      
   return factorial;
}

int ncr(int n,int r) 
{
   return fact(n) / ( fact(n-r) * fact(r) );
}

int main() 
{
   int n, i, j;

   n = 5;

   for(i = 0; i <= n; i++)
    {         
      for(j = 0; j <= i; j++)
         printf(" %3d", ncr(i, j));

      printf("\n");
   }
   return 0;
}