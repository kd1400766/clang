#include<stdio.h>

main()
{
	int a, i=0, sum = 0;
	printf("����:");
	while (scanf("%d", % a) != EOF) {
		sum += a;
		i++;
		printf("����:");
	}
	printf("���v=%d ����=%.2f\n", sum, (float)sum / i);
}