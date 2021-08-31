/*
On the eve of the Silver Jubilee Celebrations of the college, the college management has decided to give Lucky Prizes for students whose enrollment numbers

does not contain any even digits
does not start or end with 1
 Given the enrollment number of a student, write a program to find whether the student is eligible for the lucky prize or not.

Input format:

Input consists of the enrollment number of the student.

 

Output Format:
Output consists of a string that is either 'yes' or 'no'.
Print ‘yes’ if the student is eligible and print ‘no’ otherwise.
Refer sample input and output for formatting specifications.

Note: Please provide input exactly as mentioned in below samples. No extra print statements should be present for prompting input.

Sample Input 1:
379517
Sample Output 1:
yes
Sample Input 2:
1371
Sample Output 2:
no
Sample Input 3:
3234
Sample Output 3:
no
Sample Input 4:
135
Sample Output 4:
no
Sample Input 5:
371
Sample Output 5:
no*/
#include<stdio.h>
int main()
{
	int n,a=1,b=1,c=1;
	scanf("%d",&n);
	if(n%10==1)
	{
		b=0;
	}
	while(n>9)
	{
		int x=n%10;
		if(x%2==0)
		{
			c=0;
			break;
		}
		n/=10;
	}
	if(n%10==1)
	{
		a=0;
	}
	if(a && b &&c)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
