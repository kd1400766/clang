#include<stdio.h>
main()
{
	int i, j,su;
	printf("���́H");
	scanf("%d", &i);
	su = i + 1;
	do {
		j = 0;
		do {
			printf(" ");
			j++;
		} while (j <= su - i);
		j = 0;
		do {
			printf("*");
			j++;
		} while (j<i);
			printf("\n");
			i++;
	} while (i <= su);
}