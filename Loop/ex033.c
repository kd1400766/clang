#include<stdio.h>
main()
{
	int i=0,k=0,su;

	printf("”‚ÍH ");
	scanf("%d", &su);

	for (;su != -999;) {
		k += su;
		i++;
		printf("”‚ÍH");
		scanf("%d", &su);
	}
	if (i != 0) {
		printf("‡Œv=%d •½‹Ï=%.2F\n", k, (float)k / i);
	}
}