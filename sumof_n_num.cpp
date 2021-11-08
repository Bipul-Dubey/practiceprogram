#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"enter number: ";
    cin>>num;
    for(int i=0;i<=num;i++){
        sum+=i;
    }
    cout<<"sum of initial "<<num<<" number is "<<sum;
    return 0;
}