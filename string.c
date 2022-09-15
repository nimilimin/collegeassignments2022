#include<stdio.h>
#include<string.h>

char a[100],b[100];
void input()
{

printf("\n ENTER THE FIRST STRING :");
scanf("%s",&a);

printf("\n ENTER THE SECOND STRING :");
scanf("%s",&b);

}

int len_str(char a[])
{
    for(int i=0;i<10000;i++)
    {
        if(a[i]=='\0')
        return i;
    }
}


void join(char a[],char b[])
{
    int con=len_str(a);
    for(int i=0;i<i+1;i++)
    {
        if(b[i]=='\0')
        break;
        a[con+i]=b[i];

    }
    printf("\n AFTER MERGING %s",a);
}

void compare(char a[],char b[])
{
    int count=0;
    if(len_str(a)==len_str(b))
    {
    for(int i=0;i<len_str(a);i++)
    {
        if(a[i]==b[i])
            count++;
    }
    if(count==len_str(a))
        printf("\n both are same string");
    else
        printf("\n both are different string");
    }

    else
    printf("\n both are different string");
}


void copy(char a[],char b[])
{

    for(int i=0;i<=len_str(a);i++)
    {
        b[i]=a[i];
    }
    printf("%s",b);
}

void main()
{
input();
printf("\n STRING 1 %s",a);
printf("\n STRING 2 %s",b);
int ch=0;

    printf("\n Enter what do you want to do 1.merge 2.compare 3.findlen 4.copy :");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        join(a,b);
        break;
    
    case 2:
        compare(a,b);
        break;
    
    case 3:
        printf("The length of 1st string is : %d",len_str(a));
        printf("\n The length of 2nd string is : %d",len_str(b));
        break;
    
    case 4:
        copy(a,b);
        printf("\n STRING 1 %s",a);
        printf("\n STRING 2 %s",b);
        break;

    default:
        break;
    }

}