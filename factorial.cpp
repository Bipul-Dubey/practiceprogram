#include<iostream>
using namespace std;
int main(){
    int fact=1,i,number;
    cout<<"enter number to find factorial: ";
    cin>>number;
    for(i=1;i<=number;i++){
        fact=fact*i;
    }
    cout<<"factorial of "<<number<<" is: "<<fact;
    return 0;
}