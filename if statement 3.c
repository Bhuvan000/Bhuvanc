#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("Plese input a integer");
	scanf("%d",&n);
	
	if(n%5 == 0)
	printf("it is divisible by 5");
	
	if(n%5 != 0)
	printf("it is not divisible by 5");
}
