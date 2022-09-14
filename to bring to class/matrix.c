#include<stdio.h>



int m,n;
int a[100][100];
int b[100][100];

void input()
{
printf("\n ENTER HOW MANY ROWS :");
scanf("%d",&m);
printf("\n ENTER HOW MANY COLS :");
scanf("%d",&n);

printf("\n MATRIX 1 :");
for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);
   
}
printf("\n MATRIX 2 :");
for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++)
    scanf("%d",&b[i][j]);
   
}

}

void main()
{
input();
printf("\n MATRIX 1 :");
for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++)
    printf("%d ",a[i][j]);
   
}
printf("\n MATRIX 2 :");
for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++)
    printf("%d ",b[i][j]);
   
}
int sum[m][n];
int multi[m][n];

for(int i=0;i<m;i++)
{
   
    for(int j=0;j<n;j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
        multi[i][j]=0;
        for(int k=0;k<m;k++)
        {
            multi[i][j]=multi[i][j]+(a[i][k]*b[k][j]);
        }
    }

}

//print
printf("\n THE ADDITION OF MATRIX :");
for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++)
    printf("%d ",sum[i][j]);
   
}

if(m==n){
printf("\n THE MULTI OF MATRIX :");
for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++)
    printf("%d ",multi[i][j]);

}
}

else
printf("\n MULTI NOT POSSIBLE ");

}