//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.
#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter the first value: ");
	scanf("%d", &a);
	printf("Enter the second value: ");
	scanf("%d", &b);
	
	if (a == b)
		printf("EQUAL\n");
	else
		printf("NOT EQUAL\n");
	
	return 0;
}