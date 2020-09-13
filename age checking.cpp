#include<stdio.h>
#include<conio.h>

main()
{
	int by;
	int cy;
	int age;
	
	printf("Please enter a year \n");
	scanf("%d", &cy);
	
	printf("Please enter a year \n");
	scanf("%d", &by);
	
	age = cy - by;
	printf("%d \n", age);
}
