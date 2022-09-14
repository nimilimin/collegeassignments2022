#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[20];
    int marks[5];
    float avg;
    int total;

};

void main()
{
int numofstudents=10,total_num_of_subject=5;
printf("\n ENTER HOW MANY STUDENTS ARE THERE : ");
scanf("%d",&numofstudents);
struct student s[numofstudents];

for(int i=0;i<numofstudents;i++)
{
    printf("\n ENTER THE ROLL NO : ");
    scanf("%d",&s[i].rollno);
    printf("\n ENTER THE NAME OF STUDENT : ");
    getchar();
    gets(s[i].name);
    printf("\n ENTER THE MARKS OF STUDENT [1.BEC 2.BEE 3.CP 4.EVS 5.MECH]: ");
    scanf("%d %d %d %d %d",&s[i].marks[0],&s[i].marks[1],&s[i].marks[2],&s[i].marks[3],&s[i].marks[4]);
    s[i].total=0;
    for(int y=0;y<5;y++)
    s[i].total=s[i].total+s[i].marks[y];
    s[i].avg=s[i].total/total_num_of_subject;
}

printf("\n ROLLNO.    NAME                             MARK                           TOTAL     AVG     ");
printf("\n                         BEC       BEE       CP       EVS       MECH                            ");
for(int i=0;i<numofstudents;i++)
{
printf("\n %d      %s            %d        %d       %d       %d         %d            %d        %0.2f        ",s[i].rollno,s[i].name,s[i].marks[0],s[i].marks[1],s[i].marks[2],s[i].marks[3],s[i].marks[4],s[i].total,s[i].avg);
}

}
