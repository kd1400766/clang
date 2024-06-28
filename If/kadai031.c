#include<stdio.h>
main()
{
	float a, b;
	printf("2‚Â‚ÌÀ”’l:");
	scanf("%f%f", &a, &b);

	if (a < b) {
		printf("‘å‚«‚¢•û‚Í:%.2f", b);
	}
	else {
		printf("‘å‚«‚¢•û‚Í:%.2f", a);
	}
}