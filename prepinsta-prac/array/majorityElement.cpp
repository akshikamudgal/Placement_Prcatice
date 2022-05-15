#include <iostream>
using namespace std;
int main() {
	int n, i ,j;
	int count=0;
	int a[n];
	cout<<"Enter the size of array";
	cin>>n;
	cout<<"Enter the element of array";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
    for(int i=0;i<n-1;i++){
    	for(int j=i+1; j<n; j++){
    		if(a[i]==a[j]){
    			count++;
			}
		}
		if(count==0){
			cout<<"no repeating element";
		}
		else
		cout<<"majority element"<<count;
	}
    return 0;
}
