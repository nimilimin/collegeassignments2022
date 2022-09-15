#include<stdio.h>

int fac(int a)
{
 if(a==1)
 return a;
 else
 return a*fac(a-1);
}
void main()
{
    printf("\n ENTER A NUMBER TO FIND FACTORIAL : ");
    int num;
    scanf("%d",&num);
    printf("\n FACTORIAL IS : %d ",fac(num));
}