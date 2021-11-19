#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"element present at "<<"index ";
            return i+1;
        }
    }
    cout<<"element not found ";
    return -1;
}

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter elemnet to search: ";
    cin>>key;
    cout<<linearsearch(arr,n,key);

    return 0;
}