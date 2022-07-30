#include<stdio.h>
int main()
{
	int phy,chemis,bio,math,com;
	float parcentage;
	printf("Input marks of five subject: ");
	scanf("%d%d%d%d%d",&phy,&chemis,&bio,&math,&com);

	parcentage= (phy+chemis+bio+math+com)/5.0;
	printf("percentage = %.2f\n",parcentage);

	if(parcentage>=90)
	{
		
		printf("Grade A");
	}
	else if(parcentage>=80)
	{
		
		printf("Grade B");
	}
	else if(parcentage>=70)
	{
		
		printf("Grade C");
	}
	else if(parcentage>=60)
	{
		
		printf("Grade D");

	}
	else if(parcentage>=40)
	{
		
		printf("Grade E");

	}
	else
	{
		
		printf("Grade F");
	}
	return 0;
}