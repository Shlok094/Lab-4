#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows to be printed :");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<2*i;j++)
		{
			printf(" ");
		}
		for (int k=1;k<=n+1-i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int i=2;i<=n;i++)
	{
		for (int j=1;j<=2*(n-i);j++)
		{
			printf(" ");
		}
		for (int k=1;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
