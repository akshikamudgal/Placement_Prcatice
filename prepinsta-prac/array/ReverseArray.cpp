#include<stdio.h>;
using namespace std;
int main()
{
cin>>n; // the size of array.
for (int i=0;i<n;i++)
int a[n];
cin>>a[i];
for(int i=0;i<n/2;i++)
{

temp=a[i];
a[i]=a[n-1-i];
a[n-1-i]=temp;

}

return 0;

}
