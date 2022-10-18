#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x%400==0)
	printf("Leap year");
	else if(x%4==0)
	{
		if(x%100==0)
		printf("not Leap year");
		else
		printf("Leap year");
	}
	else
	printf("not Leap year");
	return 0;
}
