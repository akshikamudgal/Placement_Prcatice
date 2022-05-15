*#include<iostream>
using namespace std;
int main(){
	int list[100], size,i, searchElement;
	cout<<"enter the size of the list";
	cin>>size;
	cout<<"enter the elements";
	for(i=0; i<size; i++)
	cin>>list[i];
	cout<<"enter the element to be searched";
	cin>>searchElement;
	for(i=0; i<size; i++){
		if(list[i]==searchElement){
			cout<<"element found at"<<i+1<<"place";
			break;
		}
	}
	if(i==size){
		cout<<"element not found";
	}
}