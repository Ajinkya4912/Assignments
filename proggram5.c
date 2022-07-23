//Accept N number from user and display summation of digit of each number

#include<stdio.h>
#include<stdlib.h>
int Summation(int Arr[],int iLength)
{
    int iSum=0;
    int iCnt=0;
    int iDigit=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        while(Arr[iCnt]>0)
        {
       iDigit=Arr[iCnt]%10;
       iSum=iSum+iDigit;
       Arr[iCnt]=Arr[iCnt]/10;
        } 
    }
    return iSum;
}
int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *ptr=NULL;

    printf("Enter number\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(sizeof(int)*iSize);
    
    printf("Enter number of Element\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

   iRet=Summation(ptr,iSize);
   printf(" Summation of all Digit is:%d",iRet);
   free(ptr);
   return 0;
}