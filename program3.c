/*
* * * *
*   * *
* *   *
* * * *
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0;
    int j=0;

    for(i=1;i<=iRow;i++)
    {
        for(j=iCol;j>=1;j--)
        {
            if((i==1)||(i==iRow)||(j==iCol)||(j==1)||(i==j))
            {
                printf("*\t");
            } 
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter Rows\n");
    scanf("%d",&iValue1);

    printf("Enterr Colum\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}