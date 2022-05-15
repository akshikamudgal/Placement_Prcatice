#include <iostream>
using namespace std;

int main() {
	int n, sum , i ,j;
	int a[n];
	cout<<"Enter the size of array";
	cin>>n;
	cout<<"Enter the element of array";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the required sum";
	cin>>sum;
	for(int i=0;i<n;i++)
	for(int j=i;j<n;j++)
	{
	   if(a[i]+a[j]==sum)
	   cout<<a[i]<< " + "<<a[j]<<" gives the result"<<endl;
	}
       return 0;
}
