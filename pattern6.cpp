#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows to be printed :");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int s=1;s<2*i;s++)
		{
			printf(" ");
		}
		for (int j=1;j<=2*(n-i)+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
