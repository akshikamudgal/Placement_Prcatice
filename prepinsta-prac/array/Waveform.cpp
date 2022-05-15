#include <iostream>
using namespace std;
void swap( int *a, int *b)
{
    int temp; 
	temp=*a;
	*a=*b;
	*b=temp;
}
int main() {
	int n, sum , i ,j;
	int a[n];
	cout<<"Enter the size of array";
	cin>>n;
	cout<<"Enter the element of array";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
    for(i=0;i<n;i=i+2)
    {
       if(i>0 && a[i]<a[i-1])
       swap( &a[i], &a[i-1]);
       if(i<n-1 && a[i]<a[i+1])
       swap( &a[i], &a[i+1]); // If the current value is lesser then odd value following it.
    }
    for(i=0;i<n; i++)
    cout<<a[i]<<" ";

    return 0;
}
