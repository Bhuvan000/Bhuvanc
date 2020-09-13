#include<stdio.h>
#include<conio.h>

main()
{
	int apples;
	
	printf("Please enter how many apples you have...?\n");
	scanf("%d", &apples);
	
	printf("\n You have %d apples%s\n", apples, (apples != 1)?"s" : "");
	
}
