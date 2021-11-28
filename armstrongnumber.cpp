//armstrong number     153,370,1634
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,orgnum,remainder,n=0,result=0,power;
    cout<<"enter a number: ";
    cin>>num;
    orgnum=num;
    while(orgnum!=0){
        orgnum/=10;
        ++n;
    }
    orgnum=num;
    while(orgnum!=0){
        remainder=orgnum%10;
        power=round(pow(remainder,n));
        result+=power;
        orgnum/=10;
    }
    if(result==num){
        cout<<"armstrong number";
    }
    else{
        cout<<"not armstrong";
    }

    return 0;
}