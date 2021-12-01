//print largest word in given sentence
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter length of array: ";
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cout<<"enter sentence: ";

    cin.getline(arr,n);             //take all input in one line (space ignore)
    cin.ignore();                   //clear buffer
    int i=0;
    int currlen=0,maxlen=0;
    int st=0, maxst=0;
    while(1){
        if(arr[i]==' '||arr[i]=='\0'){
            if(currlen>maxlen){
                maxlen=currlen;
                maxst=st;
            }
            currlen=0;
            st=i+1;
        }
        else
            currlen++;   
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;
    for(int i=0; i<maxlen;i++){
        cout<<arr[i+maxst];
    }
    return 0;
}