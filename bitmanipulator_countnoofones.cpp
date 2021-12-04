//check how many ones in given binary numbers
#include<iostream>
using namespace std;

int numofones(int n){
    int count=0;
    while(n!=0){
        n=n&(n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cout<<"enter number to check: ";
    cin>>n;
    cout<<numofones(n)<<endl;
    return 0;
}