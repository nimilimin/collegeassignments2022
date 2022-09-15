
#include<stdio.h>
#include<string.h>

void main()
{
    int num;
    
    printf("\n ENTER HOW MANY STUDENTS :");
    scanf("%d",&num);
    char lis[100][100];
    for(int i=0;i<num;i++)
        scanf("%s",&lis[i]);
        

    int no_of_students=num;
    printf("\n ORIGINAL LIST :");
    for(int y=0;y<no_of_students;y++)
    printf(" %s",lis[y]);


    for(int i=0;i<no_of_students;i++)
    {
    for(int j=i+1;j<no_of_students-1;j++)
    {
        if(strcmp(lis[i],lis[j])>0)
        {
            char temp[100];
            strcpy(temp,lis[i]);
            strcpy(lis[i],lis[j]);
            strcpy(lis[j],temp);
        }
    }

    }
    printf("\n ARRANGED LIST :");
    for(int y=0;y<no_of_students;y++)
    printf(" %s",lis[y]);

}