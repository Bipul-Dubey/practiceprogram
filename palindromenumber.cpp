//palindrome number:= number is same after reverse , 123345=54321
#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0,temp;
    cout<<"enter number to check it is palindrome or not: ";
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum){
        cout<<"palindrome number";
    }
    else{
        cout<<"not palindrome number";
    }
    
    return 0;
}