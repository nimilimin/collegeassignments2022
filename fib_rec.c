#include<stdio.h>

int fibonacci(int m)
{
if(m==0 || m==1 )
return(m);

else
return(fibonacci(m-1)+fibonacci(m-2));
}

void main()
{
int n,m=0;
printf("Enter Total terms: ");
scanf("%d", &n);
printf("Fibonacci series terms are: ");
for(int i=0;i<n;i++)
{
printf("%d ", fibonacci(i));
}

}