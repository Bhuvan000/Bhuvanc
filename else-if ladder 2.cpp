


#include<stdio.h>
#include<conio.h>

main()
{
	int s1, s2, s3, s4, s5, s6, total;
	float avg;
	
	printf("Enter marks for 6 subjets out of 100\n");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5,&s6);
	
	total = s1+s3+s4+s4+s5+s6;
	avg = total/6;
	
	printf("total : %d\n",total);
	printf("Avg : %f\n",avg);
	
	
	if(s1<35 || s2<35 || s3<35 || s4<35 || s5<35 || s6<35)
	printf("You are failed!");
	
	else if(avg>=85)
	printf("Result : Distinction");
	
	else if(avg>=70 && avg<85)
	printf("Result : First class");
	
	else if(avg>=60 && avg<70)
	printf("Result : Second class");
	
	else if(avg>=50 && avg<60)
	printf("Result : Third class");
	
	else 
	printf("Relult : Just Pass");
}
	
	
