#include<iostream>
using namespace std;

int main()
{
char op;
float num1 , num2;

cout<< "Enter operator: +,-,*,/:";

cin >>op;
cout<<"Enter two operands:";
cin >> num1>> num2;

switch(op){

    case '+':
    cout<< num1 << "+" <<num2 << "="<< num1 +num2;
    break;

    case '-':
    cout<< num1 << '-' <<num2 << "=" <<num1 - num2;
    break;

    case '*':
    cout<< num1 << '*' <<num2 << "=" << num1 * num2;
    break;

    case '/':
    cout<< num1 << '/' <<num2 << "=" << num1 / num2;
    break;

    default:
    // if the operator is other than +,-,*,/
     cout<< "Error opeartor is not correct";
     break;

}
return 0;

}