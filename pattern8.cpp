#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows to be printed :");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int s1=1;s1<=n-i;s1++)
		{
			printf(" ");
		}
		for (int j=1;j<=n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
