#include<stdio.h>
main()
{
	int i,su;
	printf("”‚ÍH");
	scanf("%d", &i);
	do {
		su = 0;
		do {
			printf("*");
			su++;
		} while (su<5);
		printf("\n");
		i--;
	} while (i > 0);
}