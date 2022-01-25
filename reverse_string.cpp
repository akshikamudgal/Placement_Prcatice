#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void rev(char *st){
	int length = strlen(st);
	char temp;
	for(int i=0;i<length/2;i++)
	{
		temp = st[i];
		st[i]=st[length-i-1];
		st[length-i-1]=temp;
	}
}
int main()
{
    char st1[10];
    cin>>st1;
    rev(st1);
    cout<<st1;
}
