#include<stdio.h>
main()
{
	float a, b;
	printf("2�̎����l:");
	scanf("%f%f", &a, &b);

	if (a < b) {
		printf("�傫������:%.2f", b);
	}
	else {
		printf("�傫������:%.2f", a);
	}
}