#include<stdio.h>
main()
{
	float a, b;
	printf("2つの実数値:");
	scanf("%f%f", &a, &b);

	if (a < b) {
		printf("大きい方は:%.2f", b);
	}
	else {
		printf("大きい方は:%.2f", a);
	}
}