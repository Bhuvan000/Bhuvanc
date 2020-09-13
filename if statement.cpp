#include<stdio.h>
#include<conio.h>

main()
{
	int marks;
	
	printf ("Enter the marks\n");
	scanf("%d",&marks);
	
	if(marks>=35,marks<=100)
	{
		printf("You have PASSED\n");
		printf("Congrats\n");
	}
	
	if(marks<35)
	{
		printf("You have FALIED\n");
		printf("Sorry");
	}
	
	if(marks>100)
	{
		printf("Invlaid,enter number below 100\n");
	}
}
