
#include<stdio.h>
#include<math.h>

int a[1000],size_arr;
void input()
{
printf("\n ENTER HOW MANY NUMBERS :");
scanf("%d",&size_arr);
for(int i=0;i<size_arr;i++)
scanf("%d",&a[i]);
}



float mean(int a[],int size)
{
    int len=size;
    //printf("%d",len);
    float sum=0;
    for(int i=0;i<len;i++)
    {
        sum=sum+a[i];
    }
    float mean=sum/len;
    printf("\n MEAN : %0.3f ",mean);
    return(mean);
}


void var(int a[],int size)
{
    float u=mean(a,size);
    float sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+pow(a[i]-u,2);
    }
    float var=sum/(size-1);
    printf("VARIENCE : %0.3f ",var);
    printf("SD : %0.3f",sqrt(var));
}

void main()
{
    input();
    printf("\n THE ARRAY : ");
    for(int i=0;i<size_arr;i++)
    printf(" %d",a[i]);
    int size=size_arr;
    //printf("%d",size);
    var(a,size);
}