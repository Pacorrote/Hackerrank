#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */    char s[1000];
	char n[]="0123456789";
	int l,count,l1;
	scanf("%s",s);
	l=strlen(s);
	l1=strlen(n);
	for(int j=0;j<l1;j++)
	{
		count=0;
		for(int i=0;i<l;i++)
		{
			if(s[i]==n[j])
				count++;
		}
		printf("%d ",count);
		
	}
	return 0;
}
