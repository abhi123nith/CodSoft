#include<iostream>
using namespace std;

int main()
{
      float num1,num2;
      char op;

      cout<<"Enter two numbers to perform arithmatic operations : ";
      cin>>num1>>num2;
   cout<<endl;
      cout<<"Enter operation to be performed (+,-,*,/) : ";
      cin>>op;
      cout<<endl;

      cout<<num1<<" "<<op<<" "<<num2<<" = ";

      switch(op)
      {
        // Addition 
        case '+':
           cout<<num1+num2;
           break;

   //   Subtraction 
            case '-':
           cout<<num1-num2;
           break;

  // Multiplication 
            case '*':
           cout<<num1*num2;
           break;

            case '/':
            if(num2!=0)
            {
           cout<<num1/num2;
          
            }
            else {
                cout<<"Undefined";
            }
            break;

            default:
            cout<<"Error ! Operator not Defined";
      }

    return 0;
}