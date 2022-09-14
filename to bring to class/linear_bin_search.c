#include<stdio.h>

int nu=0;
int a[100];

void input()
{
    int num;
    printf("\n HOW MANY NUMBERS ARE THERE : ");
    scanf("%d",&num);
    nu=num;
    for(int i=0;i<num;i++)
    scanf("%d",&a[i]);
}



void arrange(int arr[],int size_arr)
{

    for(int j=0;j<size_arr;j++){

        for(int i=0;i<size_arr-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }

        }
    
    }
    printf("\n ARRAY AFTER REARRANGING ");
    for(int j=0;j<size_arr;j++)
    printf("%d ",arr[j]);
}



void linear(int arr[],int lower,int size,int num)
{
    int count=0;
    for(int i=lower;i<size;i++)
    {
        if(arr[i]==num){
        printf("\n NUMBER FOUND ");
        count++;
        }
    }
    if(count==0)
    printf("\n NUMBER NOT FOUND");


}


void binary(int arr[],int size,int num)
{
    arrange(arr,size);
    if(size%2==1)
    {
        if(num==arr[(size-1)/2])
            printf("\n NUMBER FOUND IN MIDDLE");
        if(num<arr[(size-1)/2])
        {
            linear(arr,0,(size-1)/2,num);
            printf("IN LEFT SIDE");
        }
        if(num>arr[(size-1)/2])
        {
            linear(arr,(size-1)/2,size,num);
            printf("IN RIGHT SIDE");

        }
    }

        if(size%2==0)
    {
        if(num==arr[(size/2)+1] || num==arr[size/2])
            printf("\n NUMBER FOUND IN MIDDLE");
        if(num<arr[size/2])
        {
            linear(arr,0,(size/2)+1,num);
            printf(" IN LEFT SIDE");
        }
        if(num>arr[(size/2)+1])
        {
            linear(arr,(size/2)+1,size,num);
            printf(" IN RIGHT SIDE");

        }
    }
}

void main()
{
input();
int size=nu;
int ch,num;
while(1>0){
printf("\n ENTER THE NUMBER YOU WANT TO SEARCH :");
scanf("%d",&num);
printf("\n 1.LINEAR SEARCH 2.BINARY SEARCH 3.END :");
scanf("%d",&ch);

printf("\n ARRAY BEFORE REARRANGING ");
for(int j=0;j<size;j++)
printf("%d ",a[j]);
int oi=0;

switch (ch)
{
case 1:
    linear(a,0,size,num);
    break;

case 2:
    binary(a,size,num);
    break;

case 3:
    oi=1;
    break;

default:
    break;
}
if(oi==1)
break;
}
}