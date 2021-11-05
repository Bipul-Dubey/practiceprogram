//fibonaacci series:-sum of previous two digit
#include<iostream>
using namespace std;
int main(){
    int n1=0,n2=1,n3,i,num;
    cout<<"enter number limit: ";
    cin>>num;
    cout<<n1<<" "<<n2<<" "; //print first two digit
    for(i=2;i<num;++i){
        n3=n1+n2;               //add first two digit
        cout<<n3<<" ";          //print 3rd and after loop it print  4th and soo on
        n1=n2;                  //changes
        n2=n3;
    }
    return 0;
}