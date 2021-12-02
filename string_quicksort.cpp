//string sorting using quicksort by yash singh
#include<iostream>
using namespace std;
void swap(string arr[], int i, int j){
    string temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(string arr[], int l, int r){
    string pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void quicksort(string arr[],int l, int r){
    if(l<r){
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);                
        quicksort(arr,pi+1,r);
    }
}

int main(){
     int n;
     cout<<"enter size of array: ";
     cin>>n;
     string arr[n+1];
     cout<<"enter element for sorting: ";
     for(int m=0;m<n;m++){
         cin>>arr[m];
     }
     quicksort(arr,0,n-1);
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0;
}