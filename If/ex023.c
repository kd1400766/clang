#include<stdio.h>
main()
{
	int s;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &s);
	if (s <= 5000) {
		printf("%dŠÔ%d•ª%d•b\n", s / 3600, (s % 3600) / 60, s % 60);
	}
	else {
		printf("ƒGƒ‰[\n");
	}
}