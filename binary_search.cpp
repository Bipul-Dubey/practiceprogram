   #include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key){
	 int s=0;
	 int e=n;
	 cout<<"number found  at index: ";
	 while(s<=e){
		 int mid=(s+e)/2;
		 if(arr[mid]==key){			
			 return mid+1;
		 }
		 else if(arr[mid]>key){			
			 e=(mid-1)+1;
		 }
		 else{
			 s=(mid+1)+1;					
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
	cout<<"enter element in array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"enter number to search: ";
	cin>>key;
	cout<<binarysearch(arr,n,key);
	return 0;
}