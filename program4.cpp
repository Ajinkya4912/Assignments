//Accept Charcter from user and check whether it is Small case  or not
#include<iostream>
using namespace std;

bool ChecksmallX(char str[])
{
    if((*str>='a')&&(*str<='z'))
    {
         return true;
    }
    else
    {
      return false;
    }
}
int main()
{
  char Arr[20];
   bool bRet;
  cout<<"Enter String"<<endl;
  cin.getline(Arr,20);

  bRet=ChecksmallX(Arr);

  if(bRet==true)
  {
    cout<<"charcter is smaller case"<<endl;
  }
  else
  {
    cout<<"charcter is not a smaller case"<<endl;
  }
}