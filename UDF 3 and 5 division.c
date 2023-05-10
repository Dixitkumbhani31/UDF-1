#include<stdio.h>

division(int n1)
{
	if(n1%3==0 && n1%5==0)
	{
		printf("Divisible");
	}
	else
	{
		printf("Not Divisible");
	}
}


main()
{
	int a;
	a=90;
	division(a);
}
