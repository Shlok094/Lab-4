#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows to be printed :");
	scanf("%d",&n);
	for (int i=n;i>0;i--)
	{
		for (int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
