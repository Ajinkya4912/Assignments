#include<stdio.h>
#include<stdlib.h>

void Display(int iRows,int iCol)
{
    int i=0;
    int j=0;
    char ch='\0';

    for(i=1;i<=iRows;i++)
    {
        for(j=1,ch='A';j<=iCol;j++,ch++)
        {
            printf("%c \t",ch);
        }
        printf("\n");
    }
}
int main()
{
  int iValue1=0,iValue2=0;
    
    printf("Enter Rows \n");
    scanf("%d",&iValue1);

    printf("Enter Column \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}