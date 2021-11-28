//quicksort by bipul-dubey
#include<iostream>
using namespace std;
//swap the value
void swap(int arr[], int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
// partition element
int partition(int arr[], int l, int r){
    int pivot=arr[r];
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
//sorting
void quicksort(int arr[],int l, int r){
    if(l<r){
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);                  //l=first index, pi=pivot, r=size/last index
        quicksort(arr,pi+1,r);
    }
}

int main(){
     int n;
     cout<<"enter size of array: ";
     cin>>n;
     int arr[n];
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