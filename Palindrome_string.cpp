#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	char st[100];
	cin>>st;
	bool flag=true;
	int l= strlen(st);
	for(int i=0;i<l;i++)
	{
		if(st[i]!=st[l-i-1])
		{
			flag= false;
			break;
		}
	}
	if(flag)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
