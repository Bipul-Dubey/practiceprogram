//simple calculator + - * /
#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"enter 2 number: ";
    cin>>a>>b;

    char op;
    cout<<"enter an operation: ";
    cin>>op;

    switch(op)
    {
    case '+':
       cout<<(a+b);
        break;
    case '-':
        cout<<(a-b);
        break;
    case '*':
        cout<<(a*b);
        break;
    case '/' :
        cout<<(a/b);
    default:
        cout<<"enter other  operation(+,-,*,/)";
        break;
    }    

    return 0;
}