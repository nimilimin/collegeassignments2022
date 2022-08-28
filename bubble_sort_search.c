#include <stdio.h>

int main()
{
    int num,i,x,y,temp,search;
    printf("\nenter the number of integers to enter in the array: ");
    scanf("%d",&num);
    int arr[num];
    //make the array
    for ( i = 0; i < num; i++)
    {
        printf("\nenter integer: ");
        scanf("%d",&arr[i]);  
    }

    for(x = 0; x < num - 1; x++)
    {     
        for(y = 0; y < num - x - 1; y++)
        {  
            if(arr[y] > arr[y + 1])
            {               
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
    }

    printf("\nenter the integer u want to find: ");
    scanf("%d",&search); 
    for ( i = 0; i < num; i++)
    {
        if (search == arr[i])
        {
            printf("\nthe position of %d is at %d",search,i);
            return 0;
        }
    }
    printf("\nkey not found");
    return 0;
}