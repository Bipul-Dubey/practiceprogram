//check number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n,i,m=0,flag=0;
    cout<<"enter number to check it is prime or not: ";
    cin>>n;
    m=n/2;
    for(i=2;i<=m;i++){
        if(n%i==0){
            cout<<"number is not prime number";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"number is prime";
    }
    return 0; 
}