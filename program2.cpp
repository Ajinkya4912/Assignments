//Uper Case to Lower Case
#include<iostream>

using namespace std;

void StrlwrX(char str[])
{
    int iCnt=0;

    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *str=*str+32;
        }
        str++;
    }
}
int main()
{
    char Arr[20];

    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);

   StrlwrX(Arr);

   cout<<"String of lower case:"<<Arr<<endl;
}