#include <iostream>
using namespace std;

int main()
{
    int opr;
    float num1, num2;
    cout << "which operation you want to perform? : "<<endl;
    cout<<"enter 1 for addition :" <<endl;
    cout<<"enter 2 for substraction :"<<endl;
    cout<<"enter 3 for multiply :"<<endl;
    cout<<"enter 4 for division :"<<endl;
    cin >> opr;
    cout<<"enter any two numbers :";
    cin>>num1>>num2;
    
    switch (opr)
    {
    case 1:
         cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
    case 2:
         cout<<num2<<"+"<<num2<<"="<<num1-num2;
        break;
    case 3:
         cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;
    case 4:
         cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;

    default:
        cout<<"Enter valid operator !!";
        break;
    }
    return 0;
}