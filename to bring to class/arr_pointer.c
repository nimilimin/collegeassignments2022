#include <stdio.h>
void main() {

    printf("\n HOW MANY NUMBERS TO ENTER :");
    int num,count=0;
    scanf("%d",&num);
    int data[num];

    printf("Enter elements: ");
    for (int i = 0; i < num; ++i)
        scanf("%d", &data[i]);

    printf("You entered: \n");
    for (int i = 0; i < num; ++i)
        printf("%d ", *(data + i));

    printf("\n ENTER THE NUMBER YOU WANT TO SEARCH : ");
    int number;
    scanf("%d",&number);
    for(int i=0;i<num;i++)
    {
        if(number==*(data + i)){
        count++;
        }
    }
    
    printf("NUMBER OF OCCURENCE : %d ",count);
}
