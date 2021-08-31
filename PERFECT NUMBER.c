/*Write a  program to find whether a given number is a perfect number or not.

A perfect number is a number in which the sum of its proper divisors is equal to the number itself. Proper divisors of a number are all divisors of a number excluding itself.

Input Format:

Input consists of a single integer.

Output Format:

Output consists of a single line. Refer sample output for details.

Sample Input 1:

6

Sample Output 1:

Perfect number

Sample Input 2:

12

Sample Output 2:

Not a perfect number*/
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("Perfect number");
	}
	else
	{
		printf("Not a perfect number");
	}
	
	return 0;
}
