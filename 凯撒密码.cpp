#include <bits/stdc++.h>
using namespace std;
char str[100];
int main()

{
	int n;
	cin>>n;
	cin>>str; 
	for(int i=0;str[i]!='\0';i++)
	{
		printf("%c",(str[i]-'a'+n)%26+'a');
	}
	
	return 0;
	
	
	
} 
