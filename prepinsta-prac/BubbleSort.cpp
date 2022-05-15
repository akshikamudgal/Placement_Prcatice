#include<iostream>
using namespace std;
void swap(int *var1, int *var2){
	int temp= *var1;
	*var1= *var2;
	*var2= temp;
}
void bubbleSort(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0; j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}
void display(int arr[],int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int array[]={1,5,8,3,9};
	int size= sizeof(array)/sizeof(array[0]);
	cout<<"array"<<endl;
	display(array,size);
	bubbleSort(array,size);
	cout<<"after sorting"<<endl;
	display(array,size);
	return 0;
}