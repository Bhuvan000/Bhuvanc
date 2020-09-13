#include<stdio.h>
#include<conio.h>

main()
{
	int marks;
	
	printf ("Enter the marks\n");
	scanf("%d",&marks);
	
	if(marks>=95,marks<=100)
	{
		printf("graded A++ \n");
		printf("Congrats\n");
	}
	
	if(marks>=90,marks<95)
	{
		printf("Graded A+ \n");
	}
	if(marks>=85,marks<90)
	{
		printf("Graded A \n");
	}
	
		if(marks>=80,marks<85)
	{
		printf("Graded B++ \n");
	}
	
		if(marks>=75,marks<80)
	{
		printf("Graded B+ \n");
	}
	
	if(marks>=70,marks<75)
	{
		printf("Graded B \n");
    }
    
	if(marks>=40,marks<70)
	{
		printf("Graded c++ \n");
    }
    
    if(marks>=35,marks<40)
	{
		printf("Just pass \n");
    }
    
	
	if(marks>=0,marks<35)
	{
		printf("You have FALIED\n");
		printf("Sorry");
	}
	
	if(marks>100)
	{
		printf("Invlaid,enter number below 100\n");
	}
}
