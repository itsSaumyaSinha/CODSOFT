#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{   int num1=0;
    int num2=0;
    int operation=0;
    float result=0; 
    cout<<"enter number 1\n";
    cin>>num1;
    cout<<"enter number 2\n";
    cin>>num2;
    char choice;
    while(true)
    {
    cout<<"user which operation you want to perform:"<<endl
        <<" 1:ADDITION" <<endl
        <<" 2:SUBTRACTION"<<endl 
        <<" 3:MULTIPLICATION"<<endl 
        <<" 4:DIVISION\n";
    cin>>operation;
    switch(operation)
    {
        case 1:
        result=num1+num2;
        cout<<"The result of the ADDITION:\t"<<result<<"\n";
        break;

        case 2:
        if(num1>num2)
        {result=num1-num2;}
        else
        {result=num2-num1;}
        cout<<"The result of the SUBTRACTION:\t"<<result<<"\n";
        break;

        case 3:
        result=num1*num2;
        cout<<"The result of the MULTIPLICATION:\t"<<result<<"\n";
        break;

        case 4:
        if(num1>num2)
        {result=num1/num2;}
        else
        {result=num2/num1;}
        cout<<"The result of DIVISION:\t"<<result<<"\n";
        break;
        default: cout<<"None of the operations has been performed\n";
    }
      cout<<"Do you want to perform other operations y or n\n";
      cin>>choice;
      if(choice=='n')
      { cout<<"ENDED";
        break;
      }
      else 
      cout<<"CONTINUING";
      continue;
    }
    return 0;
}
