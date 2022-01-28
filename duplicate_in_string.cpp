#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	char st[100];
	cin>>st;
    int count; 
    for(int i = 0; i < strlen(st); i++) {  
        count = 1;  
        for(int j = i+1; j < strlen(st); j++) {  
            if(st[i] == st[j] && st[i] != ' ') {  
                count++; 
            }  
        }   
        if(count > 1 && st[i] != '0')  
            printf("%c\n", st[i]);  
    }  
}
