#include<iostream>
using namespace std;
void insertion(int arr[],int n){
	int j, temp ;
	for(int i=0;i<n;i++)
	{
		temp = arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
	}	
}
void display(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<endl;
	}
}
int main(){
	int array[] = {1,6,8,15,11};
	int size = sizeof(array)/sizeof(array[0]);
	cout<<"List"<<endl;
	display(array,size);
	cout<<"After sorting"<<endl;
	insertion(array,size);
	display(array,size);	
}
