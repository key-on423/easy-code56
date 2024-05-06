#include <stdio.h>

int main()
{
	printf("To day you need a new start\n");
	printf("Are you ready?\n");
	printf("Y means yes,N means no\n");
	char arr;
	scanf("%c",&arr);
	if (arr == 'Y')
	{
		int i = 1;
		while (i <= 10)
		{
			printf("Good luck to you!\n");
			i++;
		}
	}
	else
		printf("Don't worried, keep going! You can do it!\n");
	return 0;
}