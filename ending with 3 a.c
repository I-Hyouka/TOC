// ending with three a
#include<stdio.h>
#define max 50
int main()
{
	int i=0;
	char str[max],state='A';
	printf("Enter the string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		switch(state)
		{
			case 'A':
				{
				if(str[i]=='a')
					state='B';
				else if(str[i]=='b')
					state='A';
				break;
				}
			case 'B':
				{
					if(str[i]=='a')
						state='C';
					else if(str[i]=='b')
						state='A';
					break;
				}
			case 'C':
				{
					if(str[i]=='a')
						state='D';
					else if(str[i]=='b')
							state='A';
					break;
				}
			case 'D':
				{
					if(str[i]=='a')
						state='D';
					else if(str[i]=='b')
						state='A';
						break;
					
				}
				
		
				
		}
	}
	if(state=='D')
		printf("Input string is accepted as it reached final state %D",state);

	else
	printf("Input string is Rejected");
}
