#include <stdio.h>
/**
 * main-finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	unsignedlong int j,k, next, sum;
	j=1
	k=2
	sum=0
	for(i=1; i<=33; ++)
	{
		if(j<4000000 && (j%2)==0)
		{
			sum=sum+j;
		}
		next=j+k;
		j=k;
	}
	print(*%lu'\n'*,sum);
return (0);
}
