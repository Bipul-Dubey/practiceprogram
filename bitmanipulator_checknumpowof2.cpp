#include<iostream>
using namespace std;

bool numpow0f2(int n){
    return (n && !(n & (n-1)));
}

int main(){
    int n;
    cout<<"enter a number to check: ";
    cin>>n;
    cout<<numpow0f2(n);
}