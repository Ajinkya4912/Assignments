//Lower Case to upper Case
#include<iostream>
using namespace std;
void StrupX(char *str)
{
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            *str=*str-32;
        }
       str++;
    }
}
int main()
{
    char Arr[20];

    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);
    StrupX(Arr);
   cout<<"String of upper case"<<endl<<Arr;
}