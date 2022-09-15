#include<stdio.h>

int arr[1000];
int size_arr;
void input()
{
printf("\n ENTER HOW MANY NUMBERS :");
scanf("%d",&size_arr);
for(int i=0;i<size_arr;i++)
scanf("%d",&arr[i]);
}



void main()
{
    int temp;
    input();
    printf("\n BEFORE SORTING : ");
    for(int i=0;i<size_arr;i++)
    printf("%d ",arr[i]);
    for(int j=0;j<size_arr;j++){

        for(int i=0;i<size_arr-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }

        }
    
    }



    printf("\n AFTER SORTING : ");
    for(int i=0;i<size_arr;i++)
    printf("%d ",arr[i]);
}