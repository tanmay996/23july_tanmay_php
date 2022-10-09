#include<stdio.h>
struct data
{
	char name[10];
	int age,sub1,sub2,sub3,total , percentage;
	
}ob[10];
int getdata()
{
	int i;
	for(i = 0;i < 2;i++)
	{
		printf("No: %d \n",i+1);
		printf("Name:");
		scanf("%s",&ob[i].name);
		printf("Physics:");
		scanf("%d",&ob[i].sub1);
		printf("Chemistry:");
		scanf("%d",&ob[i].sub2);
		printf("Maths:");
		scanf("%d",&ob[i].sub3);
		ob[i].total=ob[i].sub1+ob[i].sub2+ob[i].sub3;
		ob[i].percentage=ob[i].total/3;
	}
}
void main()
{
int i;

	getdata();
	printf("\tNo \tName \tPhysic \tChemistry \tMaths \tTotal \tPercentage\n");
	for(i = 0;i < 2;i++)
	{
		printf("\t%d",i+1);
		printf("\t%s",ob[i].name);
		printf("\t%d",ob[i].sub1);
		printf("\t%d",ob[i].sub2);
		printf("\t\t%d",ob[i].sub3);
		printf("\t%d",ob[i].total);
		printf("\t%d %% \n",ob[i].percentage);
		
	}
	
}
