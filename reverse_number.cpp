#include<iostream>
using namespace std;
int main(){
    int num,lastnum,reversenum=0;
    cout<<"enter a number to reverse: ";
    cin>>num;
    int n=num;
    while(num>0){
        lastnum=num%10;
        reversenum=reversenum*10 + lastnum;
        num=num/10;
    }
    cout<<"reverse of "<<n<<" is " <<reversenum<<endl;

    return 0;
}