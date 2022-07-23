#include<iostream>
using namespace std;

int  Check(char str[])
{
    switch (*str)
    {
    case 'A':
        cout<<"exam at 7Pm";
        break;
     case 'B':
        cout<<"Exam at 8pm";
    default:
    cout<<"Division is not Match";
    }
}
int main()
{
  char Arr[20];
   int iRet;
  cout<<"Enter String"<<endl;
  cin.getline(Arr,20);
  Check(Arr);
}