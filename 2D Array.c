#include<stdio.h>
main()
{
	//1.Declaring array
	int marks[5];
	int i;
	float avg=0.0;
	int sum=0;
	char grade='F';
	//2.Take input from user
	printf("Enter marks in 5 subjects:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	//3.Calculate the avreage
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	avg=sum/5;
	printf("The average is :%f",avg);
	//4.Calculate the grade(we use else-if ladder)
	if(avg>=91)
	{
		grade='S';
	}
	else if(avg>=81 && avg<=90)
	{
		grade='A';
	}
	else if(avg>=71 && avg<=80)
	{
		grade='B';
	}
	else if(avg>=61 && avg<=70)
	{
		grade='C';
	}
	else
	grade='F';
	//5.Disply the output
	printf("\nThe garde alloted is: %c",grade);
}
