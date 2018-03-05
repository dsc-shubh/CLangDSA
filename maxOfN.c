#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n, max, number,i;
	printf("Enter no. of ints :\n");
	scanf("%d",&n);
	printf("Enter the numbers :\n");
	if (n>0)
	{
		scanf("%d", &number);
		max = number;
		for ( i =1; i <n;  i++)
		{
			scanf("%d",&number);
			if (max<number)
			{
				max = number;
			}
		}
		printf("Maximum value is %d\n", max);
	}
	return 0;
}