/*
Patrick and Johnny found a notice in Disneyland stating that special adventures will be opened if the current year is a leap year. They were very excited and wanted to know that the year is leap year or not. Help them by writing a  program to check whether a given year is a leap year or not.
Input Format:

Input consists of a single integer.

Output Format:

Output consists of a single line. Refer sample output for details.

 

Sample Input 1:

1988

Sample Output 1:

1988 is a leap year

 

Sample Input 2:

1994

Sample Output 2:

1994 is not a leap year

 

Hint:

In general terms the algorithm for calculating a leap year is as follows.

A year will be a leap year if it is divisible by 4 but not by 100. If a year is divisible by 4 and by 100, it is not a leap year unless it is also divisible by 400.

Thus years such as 1996, 1992, 1988 and so on are leap years because they are divisible by 4 but not by 100. For century years, the 400 rule is important. Thus, century years 1900, 1800 and 1700 while all still divisible by 4 are also exactly divisible by 100. As they are not further divisible by 400, they are not leap years.
*/
#include<stdio.h>

int main()
{
	int year;
	scanf("%d",&year);
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
	{
		printf("%d is a leap year",year);
	}
	else
	{
		printf("%d is not a leap year",year);

	}
	
	return 0;
}
