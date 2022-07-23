//Accept Charcter from user and check whether it is Alphbate or not
#include<iostream>
using namespace std;

bool CheckdigX(char str[])
{
    if((*str>='A')&&(*str<='i'))
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

  bRet=CheckdigX(Arr);

  if(bRet==true)
  {
    cout<<"Charcter is Digit"<<endl;
  }
  else
  {
    cout<<"Charcter is not a Digit"<<endl;
  }
}