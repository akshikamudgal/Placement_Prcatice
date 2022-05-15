#include<iostream>
using namespace std;
void display(int arr[],int size){
	for(int i =0; i<size; i++){
		cout<<arr[i]<<endl;
	}
	
}
int main(){
	int array[] = {2,8,4,6,3,9,1};
	int size = sizeof(array)/sizeof(array[0]);
	
	cout<<"Before sorting"<<endl;
	display(array,size);
	
	
  int i, j, min_idx,temp;  
   
    for (i = 0; i < size-1; i++)  
    {   
        min_idx = i;  
        for (j = i+1; j < size; j++)
        {
        if (array[j] < array[min_idx])  
            min_idx = j;  
        }
                     
        temp = array[min_idx];
        array[min_idx] = array[i]; 
        array[i] = temp;}
        cout<<"After sorting: \n"; 
        display(array, size); 
    
    return 0; 
    
}
