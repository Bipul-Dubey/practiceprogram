#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number to check prime or not: ";
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is non prime"<<endl;
            break;
        }
   }
   if(i==n){
       cout<<n<<" is prime";
   }
   return 0;
}