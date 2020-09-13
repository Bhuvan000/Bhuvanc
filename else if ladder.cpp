#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	
	printf("Please enter any number between 0 and 2\n");
	scanf("%d",&n);
	
	if(n == 0)
	{
		printf("You have entered 0\n");
	}
	
	else if(n == 1)
	{
		printf("You entered 1\n");
	}
	else if(n == 2)
	{
		printf("You have entered 2\n");
		printf("Congrats\n");
	}
	
	else
	{
		printf("Wrong selection");
	}
}
